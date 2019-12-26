#include"Parcourir_Direction.h"

bool parcourirLesDirections (Couleur * plateauDeJeu, Position positionDuCoup, Couleur joueurActuel) {
    return (parcourirUneDirection (plateauDeJeu, positionDuCoup, HG, joueurActuel)
            || parcourirUneDirection (plateauDeJeu, positionDuCoup, H, joueurActuel)
            || parcourirUneDirection (plateauDeJeu, positionDuCoup, HD, joueurActuel)
            || parcourirUneDirection (plateauDeJeu, positionDuCoup, D, joueurActuel)
            || parcourirUneDirection (plateauDeJeu, positionDuCoup, BD, joueurActuel)
            || parcourirUneDirection (plateauDeJeu, positionDuCoup, B, joueurActuel)
            || parcourirUneDirection (plateauDeJeu, positionDuCoup, BG, joueurActuel)
            || parcourirUneDirection (plateauDeJeu, positionDuCoup, G, joueurActuel));
}


bool parcourirUneDirection (Couleur * plateauDeJeu, Position positionDuCoup, Direction uneDirection, Couleur joueurActuel) {
    bool ligneEnCours, directionValide;
    ligneEnCours = false;
    directionValide = false;
    appliquerDirection (&positionDuCoup, uneDirection);
    if (estPositionValide(positionDuCoup) && estEgalCouleur(obtenirCouleurDepuisPlateau(plateauDeJeu, positionDuCoup), obtenirCouleuropposee(joueurActuel))) {
        ligneEnCours = true;
        while (!directionValide && ligneEnCours) {
            appliquerDirection (&positionDuCoup, uneDirection);
            if (estPositionValide(positionDuCoup)) {
                if (estPositionVide (plateauDeJeu, positionDuCoup)) {
                    ligneEnCours = false;
                } else {
                    if (estEgalCouleur(obtenirCouleurDepuisPlateau(plateauDeJeu, positionDuCoup), joueurActuel)) {
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
