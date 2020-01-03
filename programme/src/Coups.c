#include "Coups.h"
#include <stdio.h>

Coups COUPS_creerCoups(){
  Coups coups;
  coups.nbCoups = 0;
  return coups;
}


bool COUPS_estVide(Coups coups){
  return (coups.nbCoups == 0);
}


void COUPS_ajouterCoup(Coups *pCoups, Coup coup){
    pCoups->lesCoups[pCoups->nbCoups] = coup;
    pCoups->nbCoups++;

}


void COUPS_retirerCoup(Coups *pCoups){
  Coup* tab = pCoups->lesCoups;
  for (int i = 1; i < pCoups->nbCoups; i++) {
    tab[i-1] = tab[i];
  }
  pCoups->nbCoups--;
}

unsigned int COUPS_nbCoups(Coups coups){
  return coups.nbCoups;
}


Coup COUPS_obtenirCoup(Coups coups){
  return coups.lesCoups[0];
}
