#include"Recherche_Coup.h"
#include"Parcourir_Direction.h"

Coups rechercherTousLesCoups(Couleur * plateauDeJeu, Couleur joueurActuel) {
    Coups * lesCoups = CreerCoups();
    Coup unCoup;
    int taille = ObtenirTaille(plateauDeJeu);
    for (int i = 1; i < taille + 1; i++) {
        for (int j = 1; j < taille + 1; j++) {
            if (rechercherUnCoup(plateauDeJeu, joueurActuel, CreerPosition(i,j))) {
                unCoup = CreerCoup(CreerPosition(i,j), joueurActuel);
                AjouterCoup(&lesCoups, unCoup);
            }
        }
    }
return *lesCoups;
}

bool rechercherUnCoup (Couleur * plateauDeJeu, Couleur joueurActuel, Position positionDuCoup) {
    if (EstPositionVide(plateauDeJeu, positionDuCoup)) {
        return(ParcourirLesDirections (plateauDeJeu, positionDuCoup, joueurActuel));
    }
    else {
        return (false);
    }
}