#include "IntelligenceArtificielle.h"

int P_IA_Max(int a, int b) {
  if (a>b){return a;};
  return b;
}

int P_IA_Min(int a, int b) {
  if (a<b){return a;};
  return b;
}

int P_IA_MinMaxExplorationRecursive(Joueur JoueurAMaximiser,Couleur joueurActuel, Couleur * plateau, int profondeurDepart){ //return un coup plutôt ?
    Coups coupsPossibles = RECHERCHECOUP_RechercherTousLesCoups(plateau,joueurActuel);
        if (profondeurDepart == 0 || PLATEAU_EstRempli(plateau)){
          return PLATEAU_CalculerPoints(plateau, joueurActuel);
        }
    int score =0;
    int pts;
    Coup BestCoup = COUPS_ObtenirCoup(coupsPossibles);
        if(!COULEUR_SontEgalesCouleurs(JOUEUR_ObtenirCouleur(JoueurAMaximiser), joueurActuel)){
          while (!COUPS_EstVide(coupsPossibles))
          {          
          pts = -1;
          Couleur * plateausp = PLATEAU_CreerPlateau();
          memcpy(plateausp, plateau, TAILLE*TAILLE*sizeof(Couleur));
          PLATEAU_JouerCoup(plateausp, COUPS_ObtenirCoup(coupsPossibles));
          score =P_IA_MinMaxExplorationRecursive(JoueurAMaximiser, COULEUR_ObtenirCouleurOpposee(joueurActuel), plateausp, profondeurDepart-1);
          if (score > pts){
            pts = score;
            BestCoup = COUPS_ObtenirCoup(coupsPossibles);
          }
          COUPS_RetirerCoup(&coupsPossibles);
          free(plateausp);
          }
        }
        else{
          while (!COUPS_EstVide(coupsPossibles)){
            pts =1000;
          Couleur * plateausp = PLATEAU_CreerPlateau();
          memcpy(plateausp, plateau, TAILLE*TAILLE*sizeof(Couleur));
          PLATEAU_JouerCoup(plateausp, COUPS_ObtenirCoup(coupsPossibles));
          score = P_IA_MinMaxExplorationRecursive(JoueurAMaximiser, COULEUR_ObtenirCouleurOpposee(joueurActuel), plateausp, profondeurDepart-1);
          if (score < pts){
            pts = score;
            BestCoup = COUPS_ObtenirCoup(coupsPossibles);
          }
          COUPS_RetirerCoup(&coupsPossibles);
        }
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
        int resExploration = P_IA_MinMaxExplorationRecursive(joueurAMaximiser, JOUEUR_ObtenirCouleur(joueurAMaximiser),plateau,JOUEUR_ObtenirProfondeur(joueurAMaximiser));
        if (resExploration> pointsMax){
          meilleurCoup = COUPS_ObtenirCoup(coupsPossibles);
          pointsMax =resExploration;
        }
        COUPS_RetirerCoup(&coupsPossibles);
      }
      return meilleurCoup;

}
