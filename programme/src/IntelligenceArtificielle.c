#include"../include/IntelligenceArtificielle.h"

int MinMax(Couleur * plateau, Couleur couleur, int Profondeur){
    int ptsDeDepart = CalculerPoint(plateau, couleur);
    Coups coupsPossibles = CreerCoups();
    while(!LC_estVide(coupsPossibles.coups)){
        JouerCoup(plateau, coupsPossibles.coups->element)
    }

    };
}