#include"../include/CoupCollection.h"
#include<stdlib.h>
#include<stdio.h>

Noeud* fonctionCopierCoup(Noeud* pNoeud) {
    Noeud * presultat = malloc(sizeof(Noeud));
    memcpy(&(presultat->element->couleur.nom), &(pNoeud->element->couleur.nom), sizeof(int));
    memcpy(&(presultat->element->couleur.hexa), &(pNoeud->element->couleur.hexa), 2*sizeof(char));
    memcpy(&(presultat->element->couleur.symbole), &(pNoeud->element->couleur.symbole), sizeof(char));
    memcpy(&(presultat->element->position.ligne), &(pNoeud->element->position.ligne), sizeof(Ligne));
    memcpy(&(presultat->element->position.colonne), &(pNoeud->element->position.colonne), sizeof(Colonne));
    //printf("//-%d-//fcc/,,\n", obtenirNumeroLigne(presultat->position.ligne));
    //printf("//-%d-//fcc/,,\n", ObtenirNumeroColonne(presultat->position.colonne));  // check
    return presultat; 
}


void fonctionLibererCoup(Noeud * pcoup) {
    free(pcoup);
}


int fonctionComparerCoup(Noeud * coup1, Noeud * coup2) {
    return estEgalCoup(*coup1->element, *coup2->element);
}