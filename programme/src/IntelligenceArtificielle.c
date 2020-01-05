#include"IntelligenceArtificielle.h"

int max(int a, int b) {
  if (a>b){return a;};
  return b;
}

int min(int a, int b) {
  if (a<b){return a;};
  return b;
}

Coup IA_MinMax(Couleur * plateau, Joueur joueurAMaximiser, int Profondeur){
      Coups coupsPossibles = RECHERCHECOUP_RechercherTousLesCoups(plateau,JOUEUR_ObtenirCouleur(joueurAMaximiser)); // + rechercherLesCoups ?
      Coup meilleurCoup= COUPS_ObtenirCoup(coupsPossibles);
      int pointsMax =-1;
      while (!COUPS_EstVide(coupsPossibles))
      {
        PLATEAU_JouerCoup(plateau, COUPS_ObtenirCoup(coupsPossibles));
        int resExploration = IA_MinMaxExplorationRecursive(joueurAMaximiser, JOUEUR_ObtenirCouleur(joueurAMaximiser),plateau,JOUEUR_ObtenirProfondeur(joueurAMaximiser));
        //printf("%d pts%d", pointsMax, resExploration);
        if (resExploration> pointsMax){
          meilleurCoup = COUPS_ObtenirCoup(coupsPossibles);
          pointsMax =resExploration;
          //printf("%d pts%d", pointsMax, resExploration);
        }
        COUPS_RetirerCoup(&coupsPossibles);
      }
      return meilleurCoup;

}


int IA_MinMaxExplorationRecursive(Joueur JoueurAMaximiser,Couleur joueurActuel, Couleur * plateau, int profondeurDepart){ //return un coup plutôt ?
    Coups coupsPossibles = RECHERCHECOUP_RechercherTousLesCoups(plateau,joueurActuel); // + rechercherLesCoups ?
    int pts =-1;
    while(!COUPS_EstVide(coupsPossibles)){
        PLATEAU_JouerCoup(plateau, COUPS_ObtenirCoup(coupsPossibles)); // + capturer pions ?
        PLATEAU_CapturerPions(plateau, COUPS_ObtenirCoup(coupsPossibles));
        
        if (profondeurDepart == 0){
          return PLATEAU_CalculerPoints(plateau, joueurActuel);
        }
        if(!COULEUR_EstEgalCouleur(JOUEUR_ObtenirCouleur(JoueurAMaximiser), joueurActuel)){
          if(profondeurDepart==4){/*printf("hi")*/;}
          PLATEAU_JouerCoup(plateau, COUPS_ObtenirCoup(coupsPossibles));
          pts = max(IA_MinMaxExplorationRecursive(JoueurAMaximiser, COULEUR_ObtenirCouleurOpposee(joueurActuel), plateau, profondeurDepart-1),pts);
          COUPS_RetirerCoup(&coupsPossibles);
        }
        else{
          if(profondeurDepart==4){/*printf("hi2")*/;};
            pts = -min(-IA_MinMaxExplorationRecursive(JoueurAMaximiser, COULEUR_ObtenirCouleurOpposee(joueurActuel), plateau, profondeurDepart-1),pts);
            COUPS_RetirerCoup(&coupsPossibles);
    };
    //printf("|%d|%d\n", pts, profondeurDepart);
    };
    return pts;
}
