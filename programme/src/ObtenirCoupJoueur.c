#include "ObtenirCoupJoueur.h"
#include"Couleur.h"
#include <stdio.h>
#include <stdlib.h>

Coup ObtenirCoupJoueur(Couleur *c){
  Ligne ligne;
  Colonne colonne;
  printf("Entrer la valeur du ligne");
  scanf("%d", &ligne);
  printf("Entrer la valeur du colonne");
  scanf("%d", &colonne);
  return Coup(Position(ligne,colonne),c);
}


