#include "Recherche_Coup.h"

Coups RECHERCHECOUP_RechercherTousLesCoups(Couleur * plateau, Couleur couleurJoueurActuel) {
    Coups lesCoups = COUPS_CreerCoups();
    Coup unCoup;
    int taillePlateau = PLATEAU_ObtenirTaille(plateau);

    for (int i = 1; i <= taillePlateau; i++) {
        for (int j = 1; j <= taillePlateau; j++) {
            unCoup = COUP_CreerCoup(POSITION_CreerPosition(LIGNE_ObtenirLigneDepuisInt(i),COLONNE_ObtenirColonneDepuisInt(j)), couleurJoueurActuel);
            if (RECHERCHECOUP_EstCoupValide(plateau, unCoup)) {
                COUPS_AjouterCoup(&lesCoups, unCoup);
            }
        }
    }
return lesCoups;
}

bool RECHERCHECOUP_EstCoupValide(Couleur * plateau, Coup coup) {
    if (!PLATEAU_EstPositionValide(plateau, COUP_ObtenirPosition(coup))) {
      return false;
    }

    if (!PLATEAU_EstPositionLibre(plateau, COUP_ObtenirPosition(coup))) {
      return false;
    }

    return RECHERCHEDIRECTIONS_CoupPossibleDansUneDirectionQuelconque(plateau, coup);

}

Coup RECHERCHECOUP_ObtenirCoupValide (Couleur * plateau, Joueur joueur){
    Coups lesCoups;
    Coup unCoup;
    lesCoups = RECHERCHECOUP_RechercherTousLesCoups(plateau, JOUEUR_ObtenirCouleur(joueur));
    bool estCoupValide = false;
    while (!estCoupValide) {
        unCoup = JOUEUR_ObtenirCoup(joueur, plateau);
        estCoupValide = COUPS_EstPresent(lesCoups, unCoup);
        printf("estCoupValide %d", estCoupValide);
    }
    return unCoup;
}
