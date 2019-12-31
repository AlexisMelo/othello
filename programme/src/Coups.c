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

Coup COUPS_ObtenirCoup(Coups coups){
    return *(coups.coups->element);
}

void SupprimerCoupEnTete(Coups * coups){
    Noeud noeud = *(coups->coups);
    ListeChainee ls = noeud.listeSuivante;
    coups->coups = ls;
    coups->nbDeCoups -= 1;
    fonctionLibererCoup(&noeud);
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