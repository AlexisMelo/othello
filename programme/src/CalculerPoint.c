#include "CalculerPoint.h"
#include"Couleur.h"
#include"PLateau.h"
#include <stdio.h>
#include <stdlib.h>

int CalculerPoint(Plateau *p, Couleur couleur){
  int points, i, j;
  for(i=1;i<=8;i++){
    for(j=1;j<=8;j++){
      if(couleur==ObtenirCouleur(ObtenirPion(plateau,position(i,j)))){
	    points=points+1;
      }
    }
  }
  return points
}
	
	  	  
