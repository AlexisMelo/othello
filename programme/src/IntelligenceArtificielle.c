#include"IntelligenceArtificielle.h"

int max(int a, int b) {
  if (a>b) return a;
  return b;
}

int IA_MinMax(Couleur * plateau, Couleur couleur, int profondeurDepart){ //return un coup plutôt ?
    Coups coupsPossibles = COUPS_CreerCoups(); // + rechercherLesCoups ?
    int pts =-1;

    while(!COUPS_EstVide(coupsPossibles)){
        PLATEAU_JouerCoup(plateau, COUPS_ObtenirCoup(coupsPossibles)); // + capturer pions ?

        if (profondeurDepart == 0){
            return PLATEAU_CalculerPoints(plateau, couleur);
        }

        pts = max(IA_MinMax(plateau, COULEUR_ObtenirCouleurOpposee(couleur), profondeurDepart-1),pts);

        COUPS_RetirerCoup(&coupsPossibles);
    };
    return pts;
}
