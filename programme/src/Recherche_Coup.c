#include"Recherche_Coup.h"
#include"Parcourir_Direction.h"

Coups rechercherTousLesCoups (Couleur * plateauDeJeu, Couleur joueurActuel) {
    Coups lesCoups;
    int taille = obtenirTaille(plateauDeJeu);
    for(int i=0 ; i < taille ; i++) {
        for(int j=0 ; j < taille ; j++) {
            if (rechercherUnCoup(plateauDeJeu, joueurActuel, creerPosition(i,j))) {
                AjouterCoup (&lesCoups, creerCoup(creerPosition(i,j), joueurActuel));
            }

        }
    }
return lesCoups;
}

bool rechercherUnCoup (Couleur * plateauDeJeu, Couleur joueurActuel, Position positionDuCoup) {
    if (estPositionVide(plateauDeJeu, positionDuCoup)) {
        return (parcourirLesDirections (plateauDeJeu, positionDuCoup, joueurActuel));
    }
    else {
        return (false);
    }
}