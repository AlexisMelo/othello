#include"../include/IntelligenceArtificielle.h"

int MinMax(Couleur * plateau, Couleur couleur, int Profondeur){
    int ptsDeDepart = CalculerPoint(plateau, couleur);
    Coups coupsPossibles = *CreerCoups();
    int Points =-1;
    while(!LC_estVide(coupsPossibles.coups->listeSuivante)){
        JouerCoup(plateau, coupsPossibles.coups->element);
        if (Profondeur == 0){
            return CalculerPoint(plateau, couleur);
        }
        else
        {
             Points = max(MinMax(plateau, ObtenirCouleuropposee(couleur), Profondeur-1),Points);
        };
        LC_supprimerTete(coupsPossibles.coups, FonctionLibererCoup);
    };
    return Points;
}