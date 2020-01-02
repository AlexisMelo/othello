#include "Coups.h"

Coups * COUPS_CreerCoups() {
    Coups * presultat = (Coups*)malloc(sizeof(Coups)+sizeof(int));
    presultat->coups = listeChainee();
    presultat->nbDeCoups = 0;
    return presultat;
}

void COUPS_AjouterCoup(Coups * coups, Coup coup) {
    LC_ajouter(&(coups->coups), &coup, COUPCOLLECTION_FonctionCopierCoup);
    //printf("Ajouter %d   AjouterFin", coups->coups->element->position.ligne);
    coups->nbDeCoups += 1;
    //printf("Ajouter %d   AjouterFin", coups->coups->element->position.colonne);
}

Coup COUPS_ObtenirCoup(Coups coups){
    return *(coups.coups->element);  // *presultat;
}

void COUPS_SupprimerCoupEnTete(Coups * coups){
    Noeud noeud = *(coups->coups);
    ListeChainee ls = noeud.listeSuivante;
    coups->coups = ls;
    coups->nbDeCoups -= 1;
    COUPCOLLECTION_FonctionLibererCoup((Coup*)(noeud.element));
}

int COUPS_ObtenirNombreDeCoups(Coups coups) {
    return coups.nbDeCoups;
}

bool COUPS_EstPresent(Coups coups, Coup coup) {
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

void COUPS_RetirerCoup(Coups * coups, Coup coup) {
    assert(EstPresent(*coups, coup));
        Coups temp = *coups;
        while (!LC_estVide(coups->coups)){
            if (COUP8_estEgalCoup(coup, COUPS_ObtenirCoup(*coups))){
                ListeChainee liste = coups->coups;
                //Noeud noeud = liste;
                ListeChainee ls = liste->listeSuivante;
                coups->coups = ls;
                };
                temp.coups = temp.coups->listeSuivante;

        }
}
