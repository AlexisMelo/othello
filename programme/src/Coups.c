#include "Coups.h"
#include <stdio.h>

Coups COUPS_CreerCoups(){
  Coups coups;
  coups.nbCoups = 0;
  return coups;
}

bool COUPS_EstVide(Coups coups){
  return (coups.nbCoups == 0);
}

void COUPS_AjouterCoup(Coups *pCoups, Coup coup){
    pCoups->lesCoups[pCoups->nbCoups] = coup;
    pCoups->nbCoups++;

}

void COUPS_RetirerCoup(Coups *pCoups){
  Coup* tab = pCoups->lesCoups;
  for (int i = 1; i < pCoups->nbCoups; i++) {
    tab[i-1] = tab[i];
  }
  pCoups->nbCoups--;
}

unsigned int COUPS_ObtenirNombreDeCoups(Coups coups){
  return coups.nbCoups;
}

Coup COUPS_ObtenirCoup(Coups coups){
  return coups.lesCoups[0];
}

bool COUPS_EstPresent(Coups coups, Coup coup)
{
  for (unsigned int i = 0; i < COUPS_ObtenirNombreDeCoups(coups); i++) {
    if(COUP_EstEgalCoup(coup,coups.lesCoups[i])) {
      return true;
    }
  }
  return false;
}
