#include"Parcourir_Direction.h"

bool parcourirLesDirections (Plateau plateauDeJeu, Position positionDuCoup, Couleur joueurActuel) {
    return (parcourirUneDirection (plateauDeJeu, positionDuCoup, HG, joueurActuel)
            || parcourirUneDirection (plateauDeJeu, positionDuCoup, H, joueurActuel)
            || parcourirUneDirection (plateauDeJeu, positionDuCoup, HD, joueurActuel)
            || parcourirUneDirection (plateauDeJeu, positionDuCoup, D, joueurActuel)
            || parcourirUneDirection (plateauDeJeu, positionDuCoup, BD, joueurActuel)
            || parcourirUneDirection (plateauDeJeu, positionDuCoup, B, joueurActuel)
            || parcourirUneDirection (plateauDeJeu, positionDuCoup, BG, joueurActuel)
            || parcourirUneDirection (plateauDeJeu, positionDuCoup, G, joueurActuel))
}


bool parcourirUneDirection (Plateau plateauDeJeu, Position positionDuCoup, Direction uneDirection, Couleur joueurActuel) {
    bool ligneEnCours, directionValide;
    int taille = obtenirtaille(plateauDeJeu);
    i[taille];
    j[taille];
    i = obtenirNumeroLigne (obtenirLigne(positionDuCoup));
    j = obtenirNumeroColonne (obtenirLigne(positionDuCoup));
    ligneEnCours = false;
    directionValide = false;
    appliquerDirection (positionDuCoup, uneDirection);
    if (obtenirCouleurDepuisPlateau(plateauDeJeu, positionDuCoup) != joueurActuel) {
        ligneEnCours = true;
        while (!directionValide && ligneEnCours) {
            appliquerDirection (positionDuCoup, uneDirection);
            if (EstPositionVide (plateauDeJeu, positionDuCoup)) {
                ligneEnCours = false;
            } else {
                if (obtenirCouleurDepuisPlateau(plateauDeJeu, positionDuCoup) = joueurActuel) {
                    directionValide = true;
                }
            }
        }
    }
    return (directionValide)
}
