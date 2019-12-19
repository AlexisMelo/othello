#include "ObtenirCoupJoueur.h"
#include"Couleur.h"
#include <stdio.h>
#include <stdlib.h>

Coup ObtenirCoupJoueur(Couleur c){
  int ligneNb, colonneNb;
  Colonne colonne;
  printf("Entrer la valeur de la ligne");
  scanf("%d", ligneNb);
  printf("Entrer la valeur de la colonne");
  scanf("%c", colonneNb);
  Ligne ligne = obtenirLigne(ligneNb);
  Colonne colonne = obtenirColonne(colonneNb);
  return Coup(Position(ligne,colonne),c);
}


