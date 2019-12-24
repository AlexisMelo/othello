#include "ObtenirCoupJoueur.h"
#include"Couleur.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

Coup ObtenirCoupJoueur(Couleur c){
   char * entree;
    entree = (char*)malloc(5*sizeof(char));
   char colonneLettre = entree[0]
   int ligneNombre = entree[1]
    printf("Entrer la valeur de ton coup");
    scanf("%s", entree);
    printf("%c", entree[0]);
    printf("\n");
    printf("%d", entree[1]);
  return Coup(Position(colonneLettre, ligneNombre),c);
}
