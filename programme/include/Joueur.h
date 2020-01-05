#ifndef JOUEUR_TYPE
#define JOUEUR_TYPE

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "Couleur.h"
#include "Coup.h"

typedef struct {
  int profondeur;
  Couleur couleur;
  bool estIA;
} Joueur;

#include "IntelligenceArtificielle.h"
/**
 * @brief Initialise une structure pour un joueur humain
 *
 *@param couleur Couleur associée au joueur
 *
 *@returns Structure joueur avec champs initialisés pour un humain
 */
Joueur JOUEUR_CreerJoueurHumain(Couleur couleur);

/**
 * @brief Initialise une structure pour un joueur IA
 *
 *@param couleur Couleur associée au joueur
 *@param profondeur Integer représentant le nombre de coups à l'avance que prévoit l'IA
 *
 *@returns Structure joueur avec champs initialisés pour une IA
 */
Joueur JOUEUR_CreerJoueurIA(Couleur couleur, int profondeur);

/**
 * @brief Demande à un joueur humain la saisie d'une position où il veut jouer
 *
 *@param j Joueur qui doit saisir où il veut jouer
 *
 *@returns Coup construit à partir de la saisie
 */
Coup JOUEUR_SaisirCoupHumain(Joueur j);

/**
 * @brief Demande à une IA une position où elle veut jouer
 *
 *@param j Joueur qui doit saisir où il veut jouer
 *@param plateau Plateau de jeu
 *
 *@returns Coup construit à partir de la saisie
 */
Coup JOUEUR_SaisirCoupIA(Joueur j, Couleur * plateau);

/**
 * @brief Demande à une IA une position où elle veut jouer
 *
 *@param j Joueur qui doit saisir où il veut jouer
 *@param plateau Plateau de jeu
 *
 *@returns Coup construit à partir de la saisie
 */
Coup JOUEUR_ObtenirCoup(Joueur j, Couleur * plateau);

/**
 * @brief Obtenir la couleur d'un joueur
 *
 *@param j Joueur dont on cherche la couleur
 *
 *@returns Couleur du joueur
 */
Couleur JOUEUR_ObtenirCouleur(Joueur j);

/**
 * @brief Savoir si un joueur est une IA
 *
 *@param j Joueur dont on cherche à determiner si il est une IA ou non
 *
 *@returns true si le joueur est une IA, false sinon
 */
bool JOUEUR_EstIA(Joueur j);

/**
 * @brief Obtenir la profondeur d'un joueur quand il est une IA
 *
 *@param j Joueur dont on cherche la profondeur de l'IA
 *
 *@returns Profondeur du joueur
 */
int JOUEUR_ObtenirProfondeur(Joueur j);

#endif
