#include"Parcourir_Direction.h"

bool ParcourirLesDirections (Couleur * plateauDeJeu, Position positionDuCoup, Couleur joueurActuel) {
    return (ParcourirUneDirection (plateauDeJeu, positionDuCoup, HG, joueurActuel)
            || ParcourirUneDirection (plateauDeJeu, positionDuCoup, H, joueurActuel)
            || ParcourirUneDirection (plateauDeJeu, positionDuCoup, HD, joueurActuel)
            || ParcourirUneDirection (plateauDeJeu, positionDuCoup, D, joueurActuel)
            || ParcourirUneDirection (plateauDeJeu, positionDuCoup, BD, joueurActuel)
            || ParcourirUneDirection (plateauDeJeu, positionDuCoup, B, joueurActuel)
            || ParcourirUneDirection (plateauDeJeu, positionDuCoup, BG, joueurActuel)
            || ParcourirUneDirection (plateauDeJeu, positionDuCoup, G, joueurActuel));
}


bool ParcourirUneDirection (Couleur * plateauDeJeu, Position positionDuCoup, Direction uneDirection, Couleur joueurActuel) {
    bool ligneEnCours, directionValide;
    ligneEnCours = false;
    directionValide = false;
    AppliquerDirection(positionDuCoup, uneDirection);
    if (EstPositionValide(positionDuCoup) && EstEgalCouleur(ObtenirCouleurDepuisPlateau(plateauDeJeu, positionDuCoup), ObtenirCouleuropposee(joueurActuel))) {
        ligneEnCours = true;
        while (!directionValide && ligneEnCours) {
            AppliquerDirection (positionDuCoup, uneDirection);
            if (EstPositionValide(positionDuCoup)) {
                if (EstPositionVide (plateauDeJeu, positionDuCoup)) {
                    ligneEnCours = false;
                } else {
                    if (EstEgalCouleur(ObtenirCouleurDepuisPlateau(plateauDeJeu, positionDuCoup), joueurActuel)) {
                        directionValide = true;
                    }
                }
            } else {
                ligneEnCours = false;
            }
        }
    }
    return (directionValide);
}
