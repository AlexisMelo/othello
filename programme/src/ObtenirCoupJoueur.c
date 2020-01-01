#include "ObtenirCoupJoueur.h"
#include"Couleur.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

Coup ObtenirCoupJoueur(Couleur c){
    char * entree;
    entree = (char*)malloc(5*sizeof(char));
    printf("Entrer la valeur de ton coup");
    scanf("%s", entree);
    char colonneLettre = entree[0];
    int ligneNombre = entree[1];
  return creerCoup(creerPosition(ObtenirColonneDepuisChar(colonneLettre), creerLigne(ligneNombre)),c);
}
