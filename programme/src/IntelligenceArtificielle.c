#include "IntelligenceArtificielle.h"

int P_IA_Max(int a, int b) {
  if (a>b) return a;
  return b;
}

int P_IA_Min(int a, int b) {
  if (a<b) return a;
  return b;
}

int P_IA_MinMaxExplorationRecursive(Joueur JoueurAMaximiser,Couleur joueurActuel, Couleur * plateau, int profondeurDepart){ //return un coup plutôt ?
    Coups coupsPossibles = RECHERCHECOUP_RechercherTousLesCoups(plateau,joueurActuel); // + rechercherLesCoups ?
    int pts =-1;
    while(!COUPS_EstVide(coupsPossibles)){
        PLATEAU_JouerCoup(plateau, COUPS_ObtenirCoup(coupsPossibles)); // + capturer pions ?
        PLATEAU_CapturerPions(plateau, COUPS_ObtenirCoup(coupsPossibles));

        if (profondeurDepart == 0){
            return PLATEAU_CalculerPoints(plateau, joueurActuel);
        }
        if(COULEUR_SontEgalesCouleurs(JOUEUR_ObtenirCouleur(JoueurAMaximiser), joueurActuel)){
          PLATEAU_JouerCoup(plateau, COUPS_ObtenirCoup(coupsPossibles));
          pts = P_IA_Max(P_IA_MinMaxExplorationRecursive(JoueurAMaximiser, COULEUR_ObtenirCouleurOpposee(joueurActuel), plateau, profondeurDepart-1),pts);
        COUPS_RetirerCoup(&coupsPossibles);
        }
        else{
            pts = -P_IA_Min(-P_IA_MinMaxExplorationRecursive(JoueurAMaximiser, COULEUR_ObtenirCouleurOpposee(joueurActuel), plateau, profondeurDepart-1),pts);
        COUPS_RetirerCoup(&coupsPossibles);
    };
    };
    return pts;
}

Coup IA_MinMax(Couleur * plateau, Joueur joueurAMaximiser, int Profondeur){
      Coups coupsPossibles = RECHERCHECOUP_RechercherTousLesCoups(plateau,JOUEUR_ObtenirCouleur(joueurAMaximiser)); // + rechercherLesCoups ?
      Coup meilleurCoup= COUPS_ObtenirCoup(coupsPossibles);
      int pointsMax =-1;
      while (!COUPS_EstVide(coupsPossibles))
      {
        PLATEAU_JouerCoup(plateau, COUPS_ObtenirCoup(coupsPossibles));
        if (P_IA_MinMaxExplorationRecursive(joueurAMaximiser, JOUEUR_ObtenirCouleur(joueurAMaximiser),plateau,JOUEUR_ObtenirProfondeur(joueurAMaximiser)) > pointsMax){
          meilleurCoup = COUPS_ObtenirCoup(coupsPossibles);
        }
        COUPS_RetirerCoup(&coupsPossibles);
      }
      return meilleurCoup;
}
