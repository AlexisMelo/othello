/**
 * \file Couleur.h
 *
 * Fichier contenant la définition du type Couleur, l'enum nomCouleur et de leurs fonctions associées.
*/

#ifndef __COULEUR_TYPE__
#define __COULEUR_TYPE__

#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

#define COULEUR_BLANCHE "blanc"
#define COULEUR_NOIRE "noir"

/**
 * \enum nomCouleur
 *
 * L'énumeration nomCouleur permet de définir un ensemble de valeurs possibles pour le nom des couleurs.
*/
typedef enum { Neutre, Blanc, Noir } nomCouleur;

/**
 * \struct Couleur
 *
 * Le type Couleur permet de symboliser un pion. La couleur possède un nom et un symbole,
 * le symbole est utilisé lors des affichages pour représenter la couleur.
*/
typedef struct{
    nomCouleur nom; /*!< Nom de la couleur. */
    char symbole; /*!< Symbole représentant la couleur. */
}Couleur;

/**
 * Crée une Couleur noire.
 *
 * \return Instance de Couleur noire.
*/
Couleur COULEUR_ObtenirCouleurNoir() ;

/**
 * Crée une Couleur blanche.
 *
 * \return Instance de Couleur blanche.
*/
Couleur COULEUR_ObtenirCouleurBlanc() ;

/**
 * Crée une Couleur neutre.
 *
 * \return Instance de Couleur neutre.
*/
Couleur COULEUR_ObtenirCouleurNeutre() ;

/**
 * Retourne la Couleur opposée à celle passée en entrée.
 *
 * \example COULEUR_ObtenirCouleurOpposee(instanceNoir) = instanceBlanc
 *
 * \param couleur Couleur dont on souhaite obtenir la couleur opposée.
 *
 * \return Instance de la Couleur opposée à celle passée en entrée.
*/
Couleur COULEUR_ObtenirCouleurOpposee(Couleur couleur) ;

/**
 * Détermine si la Couleur passée en entrée est une couleur neutre.
 *
 * \param couleur Couleur dont on souhaite vérifier la neutralité.
 *
 * \return true si la Couleur est neutre, false sinon.
*/
bool COULEUR_EstNeutre(Couleur couleur) ;

/**
 * Détermine si les Couleur sont identiques.
 *
 * \param couleur1 Première Couleur à comparer.
 * \param couleur2 Seconde Couleur à comparer.
 *
 * \return true si les Couleur sont identiques, false sinon.
*/
bool COULEUR_SontEgalesCouleurs(Couleur couleur1, Couleur couleur2) ;

/**
 * Obtient une instance de Couleur grâce à un String indiquant son nom.
 *
 * \param couleur String correspondant au nom de la couleur que l'on souhaite obtenir.
 *
 * \return Instance de couleur.
 */
Couleur COULEUR_ObtenirCouleurDepuisString(char * couleur);

/**
 * Permet d'accéder au champs symbole d'une instance de Couleur.
 *
 * \param couleur Couleur dont on souhaite obtenir le symbole.
 *
 * \return Caractère de la Couleur.
*/
char COULEUR_ObtenirSymbole(Couleur couleur);

#endif
