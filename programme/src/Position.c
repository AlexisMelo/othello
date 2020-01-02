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

Position ObtenirPosition(Coup coup){
    return coup
}


Position creerPosition(Ligne ligne, Colonne colonne) {
    Position position = *CreerPositionNulle();
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
