#include "obtenirCoupValide.h"

Coup obtenirCoupValide (Couleur joueurActuel, Plateau plateauDeJeu, Coup *(obtenirCoup){
    Coups lesCoups;
    Coup unCoup;
    lesCoups = rechercherTousLesCoups(plateauDeJeu, joueurActuel);
    bool unCoupValide = false;
    while (!unCoupValide) {
        unCoup = obtenirCoup(Couleur joueurActuel);
        unCoupValide = EstPresent(lesCoups, unCoup);
    }
    return unCoup;
}