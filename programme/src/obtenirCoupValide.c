#include "obtenirCoupValide.h"

Coup obtenirCoupValide (Joueur joueur, Couleur * plateau){
    Coups lesCoups;
    Coup unCoup;
    lesCoups = RECHERCHE_RechercherTousLesCoups(plateau, JOUEUR_ObtenirCouleur(joueur));
    bool estCoupValide = false;
    while (!estCoupValide) {
        unCoup = JOUEUR_ObtenirCoup(joueur, plateau);
        estCoupValide = COUPS_EstPresent(lesCoups, unCoup);
    }
    return unCoup;
}
