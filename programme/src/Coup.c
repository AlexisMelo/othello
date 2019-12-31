#include "Coup.h"

Coup COUP_CreerCoup(Position position, Couleur couleur){
    assert(!COULEUR_EstNeutre(couleur));
    Coup resultat;
    resultat.couleur = couleur;
    resultat.position = position;
    return resultat;
}

bool COUP_EstEgalCoup(Coup coup1, Coup coup2) {
    return COULEUR_EstEgalCouleur(coup1.couleur, coup2.couleur) && POSITION_EstEgalPosition(coup1.position, coup2.position);
    }

Couleur COUP_ObtenirCouleur(Coup coup){
    return coup.couleur;
}

Position COUP_ObtenirPosition(Coup coup){
    return coup.position;
}

bool COUP_EstCoupValide(Coup coup){
    return  EstPositionValide(coup.position) && !COULEUR_EstNeutre(coup.couleur);
}
