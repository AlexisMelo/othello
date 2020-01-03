#include "CalculerPoint.h"
#include"Couleur.h"
#include"Plateau.h"
#include <stdio.h>
#include <stdlib.h>

int CalculerPoint(Couleur (*plateau)[64], Couleur couleur){
  int points=0;
  int i, j;
  for(i=1;i<=ObtenirTaille(plateau);i++){
    for(j=1;j<=ObtenirTaille(plateau);j++){
      if(EstEgalCouleur(couleur,ObtenirCouleurDepuisPlateau(plateau,CreerPosition(i,j)))){
	    points=points+1;
      }
    }
  }
  return points;
}
	
	  	  
