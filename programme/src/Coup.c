#include "Coup.h"

Coup COUP_CreerCoup(Position position, Couleur couleur){
    Coup resultat;
    resultat.couleur = couleur;
    resultat.position = position;
    return resultat;
}

bool COUP_SontEgauxCoups(Coup coup1, Coup coup2) {
    return COULEUR_SontEgalesCouleurs(coup1.couleur, coup2.couleur) && POSITION_SontEgalesPositions(coup1.position, coup2.position);
    }

Couleur COUP_ObtenirCouleur(Coup coup){
    return coup.couleur;
}

Position COUP_ObtenirPosition(Coup coup){
    return coup.position;
}

bool COUP_EstCoupValide(Couleur * plateau, Coup coup){
    return  (bool) (PLATEAU_EstPositionValide(plateau, COUP_ObtenirPosition(coup)) && !COULEUR_EstNeutre(COUP_ObtenirCouleur(coup)));
}
