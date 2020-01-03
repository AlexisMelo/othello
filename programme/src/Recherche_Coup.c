#include "Recherche_Coup.h"

Coups RECHERCHECOUP_RechercherTousLesCoups(Couleur * plateau, Couleur couleurJoueurActuel) {
    Coups lesCoups = COUPS_CreerCoups();
    Coup unCoup;
    int taillePlateau = PLATEAU_ObtenirTaille(plateau);

    for (int i = 1; i <= taillePlateau; i++) {
        for (int j = 1; j <= taillePlateau; j++) {
            unCoup = COUP_CreerCoup(CreerPosition(LIGNE_ObtenirLigneDepuisInt(i),LIGNE_ObtenirColonneDepuisInt(j)));
            if (RECHERCHECOUP_EstCoupValide(plateau, unCoup)) {
                COUPS_AjouterCoup(&lesCoups, unCoup);
            }
        }
    }
return lesCoups;
}

bool RECHERCHECOUP_EstCoupValide(Couleur * plateau, Coup coup) {
    if (!POSITION_EstPositionValide(plateau, COUP_ObtenirPosition(coup))) {
      return false;
    }

    if (!PLATEAU_EstPositionLibre(plateau, COUP_ObtenirPosition(coup))) {
      return false;
    }

    return RECHERCHEDIRECTIONS_CoupPossibleDansUneDirectionQuelconque(plateau, coup);

}

Coup RECHERCHECOUP_ObtenirCoupValide (Joueur joueur, Couleur * plateau){
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
