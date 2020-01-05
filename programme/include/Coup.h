/**
 * \file Coup.h
 *
 * Fichier contenant la définition du type Coup et de ses fonctions associées.
*/

#ifndef __COUP_TYPE__
#define __COUP_TYPE__

#include "Position.h"
#include "Couleur.h"

#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

/**
 * \struct Coup
 *
 * Le type Coup permet de jouer une couleur à une position. Le Coup est composé
 * d'une position et d'une couleur. Lorsque ce Coup est considéré comme joué,
 * alors la couleur qu'il contient est insérée à la position donnée sur le plateau de jeu.
*/
typedef struct{
    Position position; /*!< Position où le Coup doit être joué. */
    Couleur couleur; /*!< Couleur du joueur qui joue le Coup. */
}Coup;

#include "Plateau.h"

/**
 * Crée un Coup.
 *
 * \param position Position où le Coup doit être joué.
 * \param couleur Couleur du joueur qui joue le Coup.
 *
 * \return Instance de Coup.
*/
Coup COUP_CreerCoup(Position position, Couleur couleur) ;

/**
 * Détermine si deux Coups sont identiques.
 *
 * \param coup1 Premier Coup à comparer.
 * \param coup2 Deuxième Coup à comparer.
 *
 * \return true si les Coups sont égaux, false sinon.
*/
bool COUP_EstEgalCoup(Coup coup1, Coup coup2) ;

/**
 * Permet d'accéder au champs couleur d'une instance de Coup.
 *
 * \param coup Coup dont on souhaite obtenir la couleur.
 *
 * \return Couleur du Coup.
*/
Couleur COUP_ObtenirCouleur(Coup coup) ;

/**
 * Permet d'accéder au champs position d'une instance de Coup.
 *
 * \param coup Coup dont on souhaite obtenir la position.
 *
 * \return Position du Coup.
*/
Position COUP_ObtenirPosition(Coup coup) ;

/**
 * Détermine si un Coup est valide. Il est considéré valide quand la position
 * est elle même valide par rapport au plateau, et si la couleur du Coup n'est pas neutre.
 *
 * \param plateau Plateau de jeu.
 * \param coup Coup dont on souhaite tester la validité.
 *
 * \return true si le Coup est valide, false sinon.
*/
bool COUP_EstCoupValide(Couleur * plateau, Coup coup) ;

#endif
