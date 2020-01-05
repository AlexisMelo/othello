#ifndef COULEUR_TYPE
#define COULEUR_TYPE

#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

#define COULEUR_BLANCHE "blanc"
#define COULEUR_NOIRE "noir"

typedef enum { Neutre, Blanc, Noir, Nulle } nomCouleur;

typedef struct{
    nomCouleur nom;
    char symbole;
}Couleur;

/**
 *  Retourne une Couleur noire
 *
 * \return Couleur avec Couleur.nom = Noir, Couleur.hexa = FF, Couleur.symbole = 'X'
*/
Couleur COULEUR_ObtenirCouleurNoir() ;

/**
 * Retourne une Couleur blanche
 *\return Couleur avec Couleur.nom = Blanc, Couleur.hexa = 00 , Couleur.symbole = '0'
*/
Couleur COULEUR_ObtenirCouleurBlanc() ;

/**
 * Retourne une Couleur neutre
 *\return Couleur avec Couleur.nom = Vide, Couleur.hexa =01 , Couleur.symbole = ' '
*/
Couleur COULEUR_ObtenirCouleurNeutre() ;

/**
 *  Retourne la couleur opposée à celle passée en entrée
 *
 * \param couleur : Couleur Blanc ou Noir
 *
 * \return Couleur opposée à celle passsée en entrée
*/
Couleur COULEUR_ObtenirCouleurOpposee(Couleur couleur) ;

/**
 *  Retourne Vrai si la couleur entrée est la Couleur Neutre.
 *
 * \param couleur : Couleur Blanc ou Noir
 *
 * \return estNeutre : booléen
*/bool COULEUR_EstNeutre(Couleur couleur) ;

/**
 *  Retourne vrai si les couleurs entrées sont identiques.
 *
 * \param couleur1 : Couleur
 *
 * \param couleur2 : Couleur
 *
 * \return Couleur opposée à celle passsée en entrée
*/
bool COULEUR_EstEgalCouleur(Couleur couleur1, Couleur couleur2) ;

/**
 * @fn int ObtenirCouleurDepuisString(char * couleur)
 *  Obtenir une structure Couleur depuis un string correspondant à son nom
 *
 * \param char* String correspondant au nom de la couleur
 *
 * \return Couleur Structure Couleur
 */
Couleur COULEUR_ObtenirCouleurDepuisString(char * couleur);

char COULEUR_ObtenirSymbole(Couleur couleur);

#endif
