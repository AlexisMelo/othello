#include "ObtenirCoupJoueur.h"
#include"Couleur.h"
#include <stdio.h>
#include <stdlib.h>

Coup ObtenirCoupJoueur(Couleur *c){
  Ligne ligne;
  Colonne colonne;
  printf("Entrer la valeur de la ligne");
  scanf("%d", &ligne);
  printf("Entrer la valeur de la colonne");
  scanf("%d", &colonne);
  return Coup(Position(ligne,colonne),c);
}


