#include "Coups.h"
#include "Coup.h"
#include "CoupCollection.h"
#include "ListeChainee.h"
#include<assert.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
Coups * CreerCoups() {
    Coups * presultat = (Coups*)malloc(sizeof(Coups)+sizeof(int));
    presultat->coups = listeChainee();
    presultat->nbDeCoups = 0;
    return presultat;
}

void AjouterCoup(Coups * coups, Coup coup) {
    LC_ajouter(&(coups->coups), &coup, fonctionCopierCoup);
    //printf("Ajouter %d   AjouterFin", coups->coups->element->position.ligne);
    coups->nbDeCoups = coups->nbDeCoups + 1;
    //printf("Ajouter %d   AjouterFin", coups->coups->element->position.colonne);
}

/** Obtient le coup en tête de la liste chaînée de coups.
 * 
 * @param coups : Coups dont obtenir le premier Coup.
 * @returns Coup: Coup en tête
*/

Coup COUPS_ObtenirCoup(Coups coups){
    //assert(coups.nbDeCoups != 0);
    /* printf("\n");
    printf("%d|OO|", (coups.coups->element->couleur.nom));
    printf("%s|OO|", (coups.coups->element->couleur.hexa));
    printf("%c|OO|", (coups.coups->element->couleur.symbole));
    printf("%d|OO|", ObtenirNumeroColonne(coups.coups->element->position.colonne));
    printf("%d|OO|", obtenirNumeroLigne(coups.coups->element->position.ligne));
    Coup resultat = creerCoup(creerPosition(creerLigne(1),creerColonne(1)), CouleurNeutre()); 
    Coup * presultat = (Coup*)malloc(sizeof(Coup));
    memcpy(&(presultat->couleur.nom), &(coups.coups->element->couleur.nom), sizeof(int));
    strcpy(presultat->couleur.hexa, coups.coups->element->couleur.hexa);
    memcpy(&(presultat->couleur.symbole), &(coups.coups->element->couleur.symbole), sizeof(char));
    memcpy(&(presultat->position.ligne), &(coups.coups->element->position.ligne), sizeof(int));
    memcpy(&(presultat->position.colonne), &(coups.coups->element->position.colonne), sizeof(int)); 
     printf("\n");
    printf("%d|O/O|", (presultat->couleur.nom));
    printf("%s|O/O|", (presultat->couleur.hexa));
    printf("%c|O/O|", (presultat->couleur.symbole));
    printf("%d|O/O|", ObtenirNumeroColonne(presultat->position.colonne));
    printf("%d|O/O|", obtenirNumeroLigne(presultat->position.ligne)); */
    return *(coups.coups->element);  // *presultat;
} 

/** Supprime coup en tête de la liste chaînée de coups.
 * 
 * @param coups : Coups dont on veut supprimer un Coup
 * @returns coups : Ensemble sans le coup supprimé
*/
void SupprimerCoupEnTete(Coups * coups){
    Noeud noeud = *(coups->coups);
    ListeChainee ls = noeud.listeSuivante;
    coups->coups = ls;
    coups->nbDeCoups -= 1;
    fonctionLibererCoup((Coup*)(noeud.element));
}


int ObtenirnombreDeCoups(Coups coups) {
    return coups.nbDeCoups;
}

bool EstPresent(Coups coups, Coup coup) {
    bool estUnCoupPresent = false;
    while (!LC_estVide(coups.coups) && !estUnCoupPresent){
            if (estEgalCoup(coup, COUPS_ObtenirCoup(coups))){
                estUnCoupPresent = true;
            }
            if(LC_estVide(LC_obtenirListeSuivante(coups.coups))){
                break;
            }
            coups.coups = LC_obtenirListeSuivante(coups.coups);
    }
    return estUnCoupPresent;
}

void RetirerCoup(Coups * coups, Coup coup) {
    assert(EstPresent(*coups, coup));
        Coups temp = *coups;
        while (!LC_estVide(coups->coups)){
            if (estEgalCoup(coup, COUPS_ObtenirCoup(*coups))){
                ListeChainee liste = coups->coups;
                //Noeud noeud = liste;
                ListeChainee ls = liste->listeSuivante;
                coups->coups = ls;
                };
                temp.coups = temp.coups->listeSuivante;

        }
}