#include "ObtenirCoupJoueur.h"
#include"Couleur.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

Coup ObtenirCoupJoueur(Couleur c){
  int ligneNb, colonneNb;
printf("Entrer la valeur de la colonne");
  scanf("%c", &colonneNb);
  printf("Entrer la valeur de la ligne");
  scanf("%d", &ligneNb);
  Ligne ligne = obtenirLigne(ligneNb);
  Colonne colonne = obtenirColonne(colonneNb);
  return Coup(Position(ligne,colonne),c);
}
