#include<stdbool.h>
#include"../include/Position.h"
#include"../include/Direction.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

Position * CreerPositionNulle(){
        Position *positionptr = (Position*)malloc(sizeof(Position));
        positionptr->ligne =1;
        positionptr->colonne =1;
        return positionptr;
}

Position creerPosition(Ligne ligne, Colonne colonne) {
    Position position = *CreerPositionNulle();
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

Position * fonctionCopierPosition(Position * pPos){
    Position * presultat = malloc(sizeof(Position));
    memcpy(&(presultat->ligne), &(pPos->ligne), sizeof(int));
    memcpy(&(presultat->colonne), &(pPos->colonne), sizeof(int));
    return presultat; 
}


void appliquerDirection(Position * position, Direction direction){
    FixerLigne(position, obtenirLigne(*position) + ObtenirDecalageLigne(direction));
    FixerColonne(position, obtenirColonne(*position) + ObtenirDecalageColonne(direction));
}


bool estEgalPosition(Position position1, Position position2) {
    return estEgalColonne(position1.colonne, position2.colonne) && estEgalLigne(position1.ligne, position2.ligne);
    }