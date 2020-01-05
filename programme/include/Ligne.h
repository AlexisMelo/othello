/**
 * \file Ligne.h
 *
 * Fichier contenant la définition de l'enum Ligne et de ses fonctions associées.
*/

#ifndef __LIGNE_TYPE__
#define __LIGNE_TYPE__

#include<stdbool.h>

/**
 * \enum Ligne
 *
 * L'énumeration permet de travailler avec les Ligne autrement que des integer. Le problème
 * étant que les indices et tableaux en C commencent en 0, alors que nos Ligne à nous commencent
 * en 1.
*/
typedef enum {Un, Deux, Trois, Quatre, Cinq, Six, Sept, Huit} Ligne;

/**
 * Obtient la Ligne correspondante à un integer.
 *
 * \example : LIGNE_ObtenirLigneDepuisInt(3) => ligne Trois
 *
 * \param int Numéro dont on souhaite retrouver la Ligne.
 *
 * \return Enumeration Ligne correspondant au numéro.
*/
Ligne LIGNE_ObtenirLigneDepuisInt(int ligNum);

/**
 * Obtient le numero réel d'une Ligne. L'énumeration en C commence à 0 alors
 * que nous travaillons avec des Ligne et des Colonne dont les indices commencent à 1.
 *
 * \example LIGNE_ObtenirNumeroLigne(Un) = 1
 *
 * \param ligne Ligne dont on souhaite obtenir le numéro.
 *
 * \return Numéro de la Ligne.
*/
int LIGNE_ObtenirNumeroLigne(Ligne ligne);

/**
 * Détermine si deux Ligne sont égales.
 *
 * \param ligne1 Première Ligne à comparer.
 * \param ligne2 Deuxième Ligne à comparer.
 *
 * \return true si les Ligne sont égales, false sinon.
*/
bool LIGNE_SontEgalesLignes(Ligne ligne1, Ligne ligne2);

#endif
