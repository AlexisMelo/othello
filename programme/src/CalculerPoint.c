#include "CalculerPoint.h"
#include"Couleur.h"
#include"Plateau.h"
#include <stdio.h>
#include <stdlib.h>

int CalculerPoint(Couleur * p, Couleur couleur){
  int points=0;
  int i, j;
  for(i=1;i<=obtenirTaille(p);i++){
    for(j=1;j<=obtenirTaille(p);j++){
      if(couleur==obtenirCouleurDepuisPlateau(p,creerPosition(i,j))){
	    points=points+1;
      }
    }
  }
  return points;
}
	
	  	  
