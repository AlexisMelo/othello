#include<stdbool.h>
#include"../include/Position.h"
#include"../include/Direction.h"

Position CreerPosition(Ligne ligne, Colonne colonne) {
    Position position;
    position.ligne = ligne;
    position.colonne = colonne;
    return position;
}


Ligne ObtenirLigne(Position position) {
    return position.ligne;
}

Colonne ObtenirColonne(Position position) {
    return position.colonne;
}

bool EstPositionValide(Position position) {
    Colonne colonne = ObtenirColonne(position);
    Ligne ligne = ObtenirLigne(position);
    return (colonne < 9) && (ligne < 9);
}

void FixerLigne(Position * position, Ligne ligne) {
    position -> ligne = ligne;
}   

void FixerColonne(Position * position, Colonne colonne) {
    position -> colonne = colonne;
}


Position AppliquerDirection(Position position, Direction direction){
        Position oldPos = position;
        FixerLigne(&position, ObtenirLigne(position) + ObtenirDecalageLigne(direction));
        FixerColonne(&position, ObtenirColonne(position) + ObtenirDecalageColonne(direction));
        if(EstPositionValide(position)){;
            return position;
        }
        else{
            return oldPos;
        };
}


bool EstEgalPosition(Position position1, Position position2) {
    return EstEgalColonne(position1.colonne, position2.colonne) && EstEgalLigne(position1.ligne, position2.ligne);
}