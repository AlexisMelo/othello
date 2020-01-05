/**
 * \file Position.h
 *
 * Fichier contenant la définition du type Position et de ses fonctions associées.
*/

#ifndef __POSITION_TYPE__
#define __POSITION_TYPE__

#include <stdbool.h>
#include <assert.h>

#include "Ligne.h"
#include "Colonne.h"

/**
 * \struct Position
 *
 * Le type Position permet de symboliser les cases du plateau. Une position est representée
 * par une Ligne et une Colonne.
 */
typedef struct
{
    Ligne ligne; /*<! Ligne de la Position */
    Colonne colonne; /*<! Colonne de la Position */
}Position;

#include "Couleur.h"
#include "Direction.h"

/**
 * Crée une Position.
 *
 * \param ligne Ligne de la Position.
 * \param colonne Colonne de la Position.
 *
 * \return Instance de Position.
*/
Position POSITION_CreerPosition(Ligne ligne, Colonne colonne) ;

/**
 * Permet d'accéder au champs Ligne de la Position.
 *
 * \param position Position dont on souhaite obtenir la Ligne.
 *
 * \return Ligne de la Position.
*/
Ligne POSITION_ObtenirLigne(Position position) ;

/**
 * Permet d'accéder au champs Colonne de la Position.
 *
 * \param position Position dont on souhaite obtenir la Colonne.
 *
 * \return Colonne de la Position.
*/
Colonne POSITION_ObtenirColonne(Position position) ;

/**
 * Permet de modifier le champs Ligne de la Position.
 *
 * \param position Position dont on souhaite modifier la Ligne.
 * \param ligne Nouvelle valeur de la Ligne.
*/
void POSITION_FixerLigne(Position * position, Ligne ligne) ;

/**
 * Permet de modifier le champs Colonne de la Position.
 *
 * \param position Position dont on souhaite modifier la Colonne.
 * \param colonne Nouvelle valeur de la Colonne.
*/
void POSITION_FixerColonne(Position * position, Colonne colonne) ;

/**
 * Applique une Direction à la Position. Attention, la fontion ne modifie pas la
 * Position donnée mais elle renvoi bien une autre Position à laquelle on a appliqué
 * la modification.
 *
 * \param position Position de départ à laquelle on souhaite appliquer une Direction.
 * \param direction Direction à appliquer sur la Position.
 *
 * \return Nouvelle Position avec la Direction appliquée.
*/
Position POSITION_AppliquerDirection(Position position, Direction direction) ;

/**
 * Détermine si les Position sont identiques.
 *
 * \param position1 Première Position à comparer.
 * \param position2 Seconde Position à comparer.

 * \return true si les deux Position sont égales, false sinon.
*/
bool POSITION_SontEgalesPositions(Position position1, Position position2);

#endif
