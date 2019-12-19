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
<<<<<<< HEAD
      if(couleur==ObtenirCouleurDepuisPlateau(p,creerPosition(i,j))){
=======
      if(couleur==obtenirCouleurDepuisPlateau(p,position(i,j)))
>>>>>>> 5fc9c780caffe974100781d7ae9ff87fdb008b8f
	    points=points+1;
      }
    }
  }
  return points
}
	
	  	  
