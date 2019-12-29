#ifndef POSITION_TYPE
#define POSITION_TYPE

#include "../include/Ligne.h"
#include "../include/Direction.h"
#include "../include/Colonne.h"
#include<stdbool.h>
#include<assert.h>

typedef struct _Position
{
    Ligne ligne;
    Colonne colonne;
}Position;


/**
 * @brief Construit une Position à partir d'une Ligne et d'une Colonne
 * 
 * @param ligne : Ligne
 * 
 * @param colonne : Colonne
 * 
 * @returns position : Position
*/
Position creerPosition(Ligne ligne, Colonne colonne) ;


/**
 * @brief Retourne la ligne de la Position passée en entrée
 * 
 * @param position : Position
 * 
 * @returns ligne : Ligne
*/
Ligne obtenirLigne(Position position) ;


/**
 * @brief Retourne la colonne de la Position passée en entrée
 * 
 * @param position : Position
 * 
 * @returns colonne : Colonne
*/
Colonne obtenirColonne(Position position) ;


/**
 * @brief vérifie si la position passée en entrée est valide
 * 
 * @param position Position
 * 
 * @returns estPositionValide : Booléen
*/
bool estPositionValide(Position position) ;


/**
 * @brief Fixe la ligne de la position
 * 
 * @param position : Position
 * 
 * @param Ligne : Ligne à appliquer
 * 
*/
void FixerLigne(Position * position, Ligne ligne) ;


/**
 * @brief Fixe la ligne de la position
 * 
 * @param position : Position
 * 
 * @param colonne : Colonne à appliquer
 * 
*/
void FixerColonne(Position * position, Colonne colonne) ;


/**
 * @brief applique une directionà la position
 * 
 * @param position : Position
 * 
 * @param Direction : Direction à appliquer
 * 
*/
void appliquerDirection(Position * position, Direction direction) ;


/**
 * @brief Vérifie si les positions sont égales
 * 
 * @param position1 : Position
 * @param position2 : Position
 * @returns bool : 
*/


bool estEgalPosition(Position position1, Position position2);

Position *fonctionCopierPosition(Position * pPos) ;

#endif