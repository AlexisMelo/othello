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
<<<<<<< HEAD
    LC_ajouter(&(coups->coups), &coup, fonctionCopierCoup);
=======
    LC_ajouter(&(coups->coups), &coup, FonctionCopierCoup);
>>>>>>> ce0d436729dc23cfa530bd2b88cc21623e88cd43
    //printf("Ajouter %d   AjouterFin", coups->coups->element->position.ligne);
    coups->nbDeCoups = coups->nbDeCoups + 1;
    //printf("Ajouter %d   AjouterFin", coups->coups->element->position.colonne);
}
<<<<<<< HEAD

Coup COUPS_ObtenirCoup(Coups coups){
    return *(coups.coups->element);
}
=======

/** Obtient le coup en tête de la liste chaînée de coups.
 * 
 * @param coups : Coups dont obtenir le premier Coup.
 * @returns Coup: Coup en tête
*/

Coup COUPS_ObtenirCoup(Coups coups){
    return *(coups.coups->element);  // *presultat;
} 
>>>>>>> ce0d436729dc23cfa530bd2b88cc21623e88cd43

void SupprimerCoupEnTete(Coups * coups){
    Noeud noeud = *(coups->coups);
    ListeChainee ls = noeud.listeSuivante;
    coups->coups = ls;
    coups->nbDeCoups -= 1;
<<<<<<< HEAD
    fonctionLibererCoup(&noeud);
=======
    fonctionLibererCoup((Coup*)(noeud.element));
>>>>>>> ce0d436729dc23cfa530bd2b88cc21623e88cd43
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
<<<<<<< HEAD
}
=======
}
>>>>>>> ce0d436729dc23cfa530bd2b88cc21623e88cd43
