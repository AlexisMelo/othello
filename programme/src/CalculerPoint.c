#include "CalculerPoint.h"
#include"Couleur.h"
#include"PLateau.h"
#include <stdio.h>
#include <stdlib.h>

int CalculerPoint(Couleur * p, Couleur couleur){
  int points=0;
  int i, j;
  for(i=1;i<=ObtenirTaille(p);i++){
    for(j=1;j<=ObtenirTaille(p);j++){
      if(couleur==obtenirCouleurDepuisPlateau(p,position(i,j)))
	    points=points+1;
      }
    }
  }
  return points
}
	
	  	  
