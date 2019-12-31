#include "FaireUnePartie.h"

void PARTIE_FaireUnePartie(void (*AfficherResultat)(Couleur *),void (*AfficherPlateau)(Couleur *), Joueur j1, Joueur j2){
  Couleur* plateau = PLATEAU_CreerPlateau();
  PLATEAU_InitialiserPlateau(plateau);
  PARTIE_GererPartie(plateau,AficherResultat,AfficherPlateau,j1,j2);
}
