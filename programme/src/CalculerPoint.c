#include "CalculerPoint.h"
#include"Couleur.h"
#include"PLateau.h"
#include <stdio.h>
#include <stdlib.h>

int CalculerPoint(Couleur * p, Couleur couleur){
  int points, i, j;
  for(i=1;i<=ObtenirTaille(p);i++){
    for(j=1;j<=ObtenirTaille(p);j++){
      if(couleur==ObtenirCouleurDepuisPlateau(p,creerPosition(i,j))){
	    points=points+1;
      }
    }
  }
  return points
}
	
	  	  
