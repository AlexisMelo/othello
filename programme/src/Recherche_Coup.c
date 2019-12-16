#include"Recherche_Coup.h"
#include"Parcourir_Direction.h"

Coups rechercherTousLesCoups (Plateau plateauDeJeu, Couleur joueurActuel) {
    Coups lesCoups;
    int taille = obtenirtaille(plateauDeJeu);
    i[taille];
    j[taille];
    for(i=0 ; i < taille ; i++) {
        for(j=0 ; j < taille ; j++) {
            if (rechercherUnCoup(plateauDeJeu, joueurActuel, creerPosition(i,j))) {
                ajouterCoup (&lesCoups, creerCoup(creerPosition(i,j), joueurActuel));
            }

        }
    }
return lesCoups;
}

bool rechercherUnCoup (Plateau plateauDeJeu, Couleur joueurActuel, Position positionDuCoup) {
    if (estPositionVide(plateauDeJeu, positionDuCoup)) {
        return (parcourirLesDirections (plateauDeJeu, positionDuCoup, joueurActuel));
    }
    else {
        return (false);
    }
}