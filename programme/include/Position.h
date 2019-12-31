#ifndef POSITION_TYPE
#define POSITION_TYPE

#include "Ligne.h"
#include "Colonne.h"
#include "Direction.h"
#include "Couleur.h"

#include <stdbool.h>
#include <assert.h>

typedef struct
{
    Ligne ligne;
    Colonne colonne;
}Position;

/**
 * @brief Obtenir une position à partir d'une Ligne et d'une Colonne
 *
 * @param ligne Ligne
 *
 * @param colonne Colonne
 *
 * @returns structure position
*/
Position POSITION_CreerPosition(Ligne ligne, Colonne colonne) ;

/**
 * @brief Retourne la ligne de la Position passée en entrée
 *
 * @param position Position dont on souhaite connaitre la ligne
 *
 * @returns ligne de la position
*/
Ligne POSITION_ObtenirLigne(Position position) ;

/**
 * @brief Retourne la colonne de la Position passée en entrée
 *
 * @param position Position dont on souhaite connaitre la colonne
 *
 * @returns colonne de la position
*/
Colonne POSITION_ObtenirColonne(Position position) ;

/**
 * @brief Vérifie si la position passée en entrée est valide par rapport à un plateau, cad qu'elle existe sur le dit plateau
 *
 * @param plateau Couleur * correspondant au plateau de jeu
 * @param position Position que l'on souhaite tester
 *
 * @returns vraie si la position existe sur le plateau
*/
bool POSITION_EstPositionValide(Couleur * plateau, Position position) ;

/**
 * @brief Fixe la ligne de la position
 *
 * @param position Position que l'on souhaite modifier
 * @param ligne Nouvelle ligne
*/
void POSITION_FixerLigne(Position * position, Ligne ligne) ;

/**
 * @brief Fixe la colonne de la position
 *
 * @param position Position que l'on souhaite modifier
 * @param colonne Nouvelle colonne
*/
void POSITION_FixerColonne(Position * position, Colonne colonne) ;

/**
 * @brief applique une direction à la position
 *
 * @param position Position de départ que l'on souhaite modifier
 * @param direction Direction à appliquer sur position
 *
 * @returns Nouvelle position avec la direction appliquée
*/
Position POSITION_AppliquerDirection(Position position, Direction direction) ;

/**
 * @brief Vérifie si les positions sont égales
 *
 * @param position1 Position
 * @param position2 Position
 * @returns true si les deux positions sont égales, false sinon
*/
bool POSITION_EstEgalPosition(Position position1, Position position2);

#endif
