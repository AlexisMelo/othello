#include<stdbool.h>;
#include"Position.h";
#include"Direction.h";

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

bool estPositionValide(Position position) {
    Colonne colonne = obtenirColonne(position);
    Ligne ligne = obtenirLigne(position);
    return (colonne < 9) && (ligne < 9);
}

void FixerLigne(Position * position, Ligne ligne) {
    position -> ligne = ligne;
}

void FixerColonne(Position * position, Colonne colonne) {
    position -> colonne = colonne;
}


Position appliquerDirection(Position position, Direction direction){
    assert(estPositionValide(appliquerDirection(position, direction)));
        FixerLigne(&position, obtenirLigne(position) + obtenirDecalageLigne(direction));
        FixerColonne(&position, obtenirColonne(position) + obtenirDecalageColonne(direction));
        return position
}


bool estEgal(Position position1, Position position2) {
    return estEgalColonne(position1.colonne, position2.colonne) && estEgalLigne(position1.ligne, position2.ligne);
}