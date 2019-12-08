#ifndef POSITION_TYPE
#define POSITION_TYPE

#include "Ligne.h"
#include "Direction.h"
#include "Colonne.h"
#include<stdbool.h>

typedef struct 
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
Position appliquerDirection(Position position, Direction direction) ;





#endif