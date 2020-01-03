#include"../include/CoupCollection.h"

Noeud* COUPCOLLECTION_FonctionCopierCoup(Noeud* pNoeud) {
    Noeud * presultat = malloc(sizeof(Noeud));
    memcpy(&(presultat->element->couleur.nom), &(pNoeud->element->couleur.nom), sizeof(int));
    memcpy(&(presultat->element->couleur.symbole), &(pNoeud->element->couleur.symbole), sizeof(char));
    memcpy(&(presultat->element->position.ligne), &(pNoeud->element->position.ligne), sizeof(Ligne));
    memcpy(&(presultat->element->position.colonne), &(pNoeud->element->position.colonne), sizeof(Colonne));
    //printf("//-%d-//fcc/,,\n", obtenirNumeroLigne(presultat->position.ligne));
    //printf("//-%d-//fcc/,,\n", ObtenirNumeroColonne(presultat->position.colonne));  // check
    return presultat;
}


void COUPCOLLECTION_FonctionLibererCoup(Noeud * pcoup) {
    free(pcoup);
}


int COUPCOLLECTION_FonctionComparerCoup(Noeud * coup1, Noeud * coup2) {
    return COUP_EstEgalCoup(*coup1->element, *coup2->element);
}
