/**
 * \file Direction.h
 *
 * Fichier contenant la définition de l'enum Direction et de ses fonctions associées.
*/

#ifndef __DIRECTION_TYPE__
#define __DIRECTION_TYPE__

#define DIRECTION_ERROR -1;

/**
 * \enum Direction
 *
 * L'énumeration Direction permet de manipuler des coordonnées relatives à un point central
 * pour obtenir un décalage de Ligne ou de Colonne compris entre -1 et 1.
 */
typedef enum {H, HD, D, BD, B, BG, G, HG} Direction;

/**
 * Permet d'obtenir le décalage au niveau d'une Ligne qu'implique une direction donnée.
 *
 * \param direction Direction dont on souhaite obtenir le décalage.
 *
 * \return Integer correspondant au décalage
*/
int ObtenirDecalageLigne(Direction direction);

/**
 * Permet d'obtenir le décalage au niveau d'une Colonne qu'implique une direction donnée.
 *
 * \param direction Direction dont on souhaite obtenir le décalage.
 *
 * \return Integer correspondant au décalage
*/
int ObtenirDecalageColonne(Direction direction);

#endif
