#include "Coup.h"
#include "Position.h"
#include "Couleur.h"
#include "Coup.h"
#include<stdlib.h>
#include<stdio.h>

Coup* fonctionCopierCoup(Coup* pcoup) {
    Coup * presultat = malloc(sizeof(Coup));
    memcpy(&(presultat->couleur.nom), &(pcoup->couleur.nom), sizeof(int));
    memcpy(&(presultat->couleur.hexa), &(pcoup->couleur.hexa), 2*sizeof(char));
    memcpy(&(presultat->couleur.symbole), &(pcoup->couleur.symbole), sizeof(char));
    memcpy(&(presultat->position.ligne), &(pcoup->position.ligne), sizeof(Ligne));
    memcpy(&(presultat->position.colonne), &(pcoup->position.colonne), sizeof(Colonne));
    //printf("//-%d-//fcc/,,\n", obtenirNumeroLigne(presultat->position.ligne));
    //printf("//-%d-//fcc/,,\n", ObtenirNumeroColonne(presultat->position.colonne));  // check
    return presultat; 
}


void fonctionLibererCoup(Coup * pcoup) {
    free(pcoup);
}


int fonctionComparerCoup(void * coup1, void * coup2) {
    return estEgalCoup(*(Coup*)coup1, *(Coup*)coup2);
}