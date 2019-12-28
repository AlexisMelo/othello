#include"Recherche_Coup.h"
#include"Parcourir_Direction.h"

Coups rechercherTousLesCoups(Couleur * plateauDeJeu, Couleur joueurActuel) {
    Coups lesCoups = CreerCoups();
    int taille = obtenirTaille(plateauDeJeu);
    for (int i = 1; i < taille + 1; i++) {
        for (int j = 1; j < taille + 1; j++) {
            if (rechercherUnCoup(plateauDeJeu, joueurActuel, creerPosition(i,j))) {
                Coup unCoup = creerCoup(creerPosition(i,j), joueurActuel);
                AjouterCoup(&lesCoups, unCoup);
            }
        }
    }
return lesCoups;
}

bool rechercherUnCoup (Couleur * plateauDeJeu, Couleur joueurActuel, Position positionDuCoup) {
    if (estPositionVide(plateauDeJeu, positionDuCoup)) {
        return(parcourirLesDirections (plateauDeJeu, positionDuCoup, joueurActuel));
    }
    else {
        return (false);
    }
}