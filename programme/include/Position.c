#include "Position.h";


Position creerPosition(Ligne ligne, Colonne colonne) {
    Position position;
    position.ligne = ligne;
    position.colonne = colonne;
    return position;
}


Ligne obtenirLigne(Position position) {
    return position.ligne;
}

Colonne obtenirColonne(Position position) {
    return position.colonne;
}