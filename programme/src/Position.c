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
    //printf("|pos|-%d-||,,\n", ObtenirNumeroColonne(position1.colonne));
    //printf("|pos|-%d-||,,\n", ObtenirNumeroColonne(position2.colonne));
    Position pos1cop = creerPosition(creerLigne(1), creerColonne(1));
    pos1cop = *fonctionCopierPosition(&position1);
    Position pos2cop = creerPosition(creerLigne(1), creerColonne(1));
    pos2cop = *fonctionCopierPosition(&position2);
    //printf("|pos|-%d-||,,\n", ObtenirNumeroColonne(position1.colonne));
    //printf("|pos|-%d-||,,\n", ObtenirNumeroColonne(position2.colonne));
    //printf("Not");
    bool res = estEgalColonne(pos1cop.colonne, pos2cop.colonne) && estEgalLigne(pos1cop.ligne, pos2cop.ligne);
    //printf("hing");
    //printf("|pos|-%d-||,,\n", ObtenirNumeroColonne(position1.colonne));
    //printf("|pos|-%d-||,,\n", ObtenirNumeroColonne(position2.colonne));
    return res;
    }