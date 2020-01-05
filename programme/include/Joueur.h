/**
 * \file Joueur.h
 *
 * Fichier contenant la définition du type Joueur et de ses fonctions associées.
*/

#ifndef __JOUEUR_TYPE__
#define __JOUEUR_TYPE__

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "Couleur.h"
#include "Coup.h"

/**
 * \struct Joueur
 *
 * Le type Joueur permet de manipuler une couleur en sachant si elle est jouée par
 * une IA ou un Joueur réel. Cette différence influe sur la façon dont les Coup
 * sont obtenus.
 */
typedef struct {
  int profondeur; /*<! Profondeur de recherche de l'IA. */
  Couleur couleur; /*<! Couleur des pions que pose le joueur. */
  bool estIA; /*<! true si le joueur est joué par une IA, false sinon. */
} Joueur;

#include "IntelligenceArtificielle.h"

/**
 * Crée un Joueur joué par un humain.
 *
 * \param couleur Couleur des pions posés par le joueur.
 *
 * \return Instance de Joueur.
 */
Joueur JOUEUR_CreerJoueurHumain(Couleur couleur);

/**
 * Crée un Joueur joué par une IA.
 *
 * \param couleur Couleur des pions posés par le joueur.
 * \param profondeur Profondeur de recherche de l'IA.
 *
 * \return Instance de Joueur.
 */
Joueur JOUEUR_CreerJoueurIA(Couleur couleur, int profondeur);

/**
 * Permet d'obtenir un Coup à partir d'une saisie par un Joueur humain.
 *
 * \param joueur Joueur dont on souhaite obtenir un Coup.
 *
 * \return Coup construit à partir de la saisie.
 */
Coup JOUEUR_SaisirCoupHumain(Joueur joueur);

/**
 * Permet d'obtenir un Coup à partir d'une saisie par une IA.
 *
 * \param joueur Joueur dont on souhaite obtenir un Coup.
 * \param plateau Plateau de jeu
 *
 *\return Coup construit à partir de la saisie.
 */
Coup JOUEUR_SaisirCoupIA(Joueur joueur, Couleur * plateau);

/**
 * Permet d'obtenir un Coup pour un Joueur donné.
 *
 * \param joueur Joueur dont on souhaite obtenir un Coup.
 * \param plateau Plateau de jeu
 *
 * \return Coup construit à partir de la saisie.
 */
Coup JOUEUR_SaisirCoup(Joueur joueur, Couleur * plateau);

/**
 * Permet d'accéder au champs couleur d'une instance de Joueur.
 *
 * \param joueur Joueur dont on souhaite obtenir la Couleur.
 *
 * \return Couleur du joueur.
 */
Couleur JOUEUR_ObtenirCouleur(Joueur joueur);

/**
 * Détermine si un Joueur est joué par une IA ou non.
 *
 * \param joueur Joueur dont on souhaite determiner si il est une IA ou non.
 *
 * \return true si le joueur est une IA, false sinon.
 */
bool JOUEUR_EstIA(Joueur joueur);

/**
 * Permet d'accéder au champs profondeur d'une instance de Joueur. Cette fonction
 * n'a pas de sens si le Joueur est joué par un humain.
 *
 *\param joueur Joueur dont on souhaite obtenir la profondeur.
 *
 *\return Profondeur du Joueur.
 */
int JOUEUR_ObtenirProfondeur(Joueur joueur);

#endif
