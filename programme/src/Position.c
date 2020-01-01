#include "../include/Position.h"
#include "Plateau.h" // ne surtout pas déplacer !!! 

Position POSITION_CreerPosition(Ligne ligne, Colonne colonne) {
    Position position;
    position.ligne = ligne;
    position.colonne = colonne;
    return position;
}

Ligne POSITION_ObtenirLigne(Position position) {
    return position.ligne;
}

Colonne POSITION_ObtenirColonne(Position position) {
    return position.colonne;
}

bool POSITION_EstPositionValide(Couleur * plateau, Position position) {
    Colonne colonne = POSITION_ObtenirColonne(position);
    Ligne ligne = POSITION_ObtenirLigne(position);
    return (COLONNE_ObtenirNumeroColonne(colonne) <= PLATEAU_ObtenirTaille(plateau)) && (LIGNE_ObtenirNumeroLigne(ligne) <= PLATEAU_ObtenirTaille(plateau)) && (COLONNE_ObtenirNumeroColonne(colonne) >= 1) && (LIGNE_ObtenirNumeroLigne(ligne) >= 1);
}

void POSITION_FixerLigne(Position * position, Ligne ligne) {
    position->ligne = ligne;
}

void POSITION_FixerColonne(Position * position, Colonne colonne) {
    position->colonne = colonne;
}

Position POSITION_AppliquerDirection(Position position, Direction direction){
        POSITION_FixerLigne(&position, LIGNE_ObtenirLigneDepuisInt(LIGNE_ObtenirNumeroLigne(POSITION_ObtenirLigne(position)) + ObtenirDecalageLigne(direction)));
        POSITION_FixerColonne(&position, COLONNE_ObtenirColonneDepuisInt(COLONNE_ObtenirNumeroColonne(POSITION_ObtenirColonne(position)) + ObtenirDecalageColonne(direction)));
        return position;
}

bool POSITION_EstEgalPosition(Position position1, Position position2) {
    return COLONNE_EstEgalColonne(POSITION_ObtenirColonne(position1), POSITION_ObtenirColonne(position2)) && LIGNE_EstEgalLigne(POSITION_ObtenirLigne(position1), POSITION_ObtenirLigne(position2));
}
