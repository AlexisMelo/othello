#include "../include/Position.h"

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

void POSITION_FixerLigne(Position * position, Ligne ligne) {
    position->ligne = ligne;
}
/**
Position * fonctionCopierPosition(Position * pPos){
    Position * presultat = malloc(sizeof(Position));
    memcpy(&(presultat->ligne), &(pPos->ligne), sizeof(int));
    memcpy(&(presultat->colonne), &(pPos->colonne), sizeof(int));
    return presultat;
}

Position AppliquerDirection(Position position, Direction direction){
        Position oldPos = position;
        FixerLigne(&position, ObtenirLigne(position) + ObtenirDecalageLigne(direction));
        FixerColonne(&position, ObtenirColonne(position) + ObtenirDecalageColonne(direction));
        if(EstPositionValide(position)){
            return position;
        }
        else{
            return oldPos;
        }
}
**/

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
