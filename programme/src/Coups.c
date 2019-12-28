#include "Coups.h"
#include "Coup.h"
#include "CoupCollection.h"
#include "ListeChainee.h"
#include<assert.h>
Coups CreerCoups() {
    Coups resultat;
    resultat.coups = listeChainee();
    resultat.nbDeCoups = 0;
    return resultat;
};

void AjouterCoup(Coups * coups, Coup coup) {
    LC_ajouter(&(coups->coups), &coup, FonctionCopierCoup);
    coups->nbDeCoups += 1;
};

/** Obtient le coup en tête de la liste chaînée de coups.
 * 
 * @param coups : Coups dont obtenir le premier Coup.
 * @returns Coup: Coup en tête
*/

Coup COUPS_ObtenirCoup(Coups coups){
    assert(coups.nbDeCoups != 0);
    return *(coups.coups);
};

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
};


int ObtenirnombreDeCoups(Coups coups) {
    return coups.nbDeCoups;
};

bool EstPresent(Coups coups, Coup coup) {
    while (!estVide()){
            if (estEgalCoup(coup, COUPS_ObtenirCoup(coups))){
                return true;
            };
        }
    return false;
}

void RetirerCoup(Coups * coups, Coup coup) {
    assert(EstPresent(*coups, coup));
        while (!estVide()){
            if (estEgalCoup(coup, COUPS_ObtenirCoup(*coups))){
                ListeChainee liste = coups->coups;
                Noeud noeud = *liste;
                ListeChainee ls = noeud.listeSuivante;
                coups->coups = ls;
                };

        }
        Noeud noeud = *(coups->coups);
}