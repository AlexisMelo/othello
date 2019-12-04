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

Position FixerLigne(Position position, Ligne ligne) {
    position.ligne = ligne;
    return position;
}

Position FixerColonne(Position position, Colonne colonne) {
    position.colonne = colonne;
    return position;
}


Position appliquerDirection(Position position, Direction direction){
    assert(estPositionValide(appliquerDirection(position, direction)));
        FixerLigne(position, obtenirLigne(position) + obtenirDecalageLigne(direction));
        FixerColonne(position, obtenirColonne(position) + obtenirDecalageColonne(direction));
}