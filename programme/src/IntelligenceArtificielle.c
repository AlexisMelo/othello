#include"IntelligenceArtificielle.h"

int max(int a, int b) {
  if (a>b) return a;
  return b;
}

int min(int a, int b) {
  if (a<b) return a;
  return b;
}

int IA_MinMax(Joueur JoueurAMaximiser,Couleur joueurActuel, Couleur * plateau, Couleur couleur, int profondeurDepart){ //return un coup plutôt ?
    Coups coupsPossibles = COUPS_CreerCoups(); // + rechercherLesCoups ?
    int pts =-1;
    Coup MeilleurCoup = COUPS_ObtenirCoup(coupsPossibles);
    while(!COUPS_EstVide(coupsPossibles)){
        PLATEAU_JouerCoup(plateau, COUPS_ObtenirCoup(coupsPossibles)); // + capturer pions ?

        if (profondeurDepart == 0){
            return PLATEAU_CalculerPoints(plateau, couleur);
        }
        if(COULEUR_EstEgalCouleur(JOUEUR_ObtenirCouleur(JoueurAMaximiser), joueurActuel)){
            if(IA_MinMax(JoueurAMaximiser, COULEUR_ObtenirCouleurOpposee(joueurActuel), plateau, COULEUR_ObtenirCouleurOpposee(couleur), profondeurDepart-1)<pts){
                Coup MeilleurCoup = COUPS_ObtenirCoup(coupsPossibles);
            }
        pts = max(IA_MinMax(JoueurAMaximiser, COULEUR_ObtenirCouleurOpposee(joueurActuel), plateau, COULEUR_ObtenirCouleurOpposee(couleur), profondeurDepart-1),pts);
        
        }
        else{
            if(IA_MinMax(JoueurAMaximiser, COULEUR_ObtenirCouleurOpposee(joueurActuel), plateau, COULEUR_ObtenirCouleurOpposee(couleur), profondeurDepart-1)>pts){
            Coup MeilleurCoup = COUPS_ObtenirCoup(coupsPossibles);
            pts = min(IA_MinMax(JoueurAMaximiser, COULEUR_ObtenirCouleurOpposee(joueurActuel), plateau, COULEUR_ObtenirCouleurOpposee(couleur), profondeurDepart-1),pts);

        }
        COUPS_RetirerCoup(&coupsPossibles);
    };
    return pts;
}
