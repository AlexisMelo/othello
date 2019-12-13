#ifndef COULEUR_TYPE
#define COULEUR_TYPE

#include<stdbool.h>
#include<string.h>

typedef struct 
{
    enum {Vide, Blanc, Noir}nom;
    char * hexa;
    char symbole;
    Couleur couleurOpposee;
} Couleur;

/**
 * @brief Retourne une Couleur noire
 *
 * @returns Couleur avec Couleur.nom = Noir, Couleur.hexa = FF, Couleur.symbole = 'X'
*/
Couleur CouleurNoir() ;


/**
 *@brief Retourne une Couleur blanche
 *@returns Couleur avec Couleur.nom = Blanc, Couleur.hexa = 00 , Couleur.symbole = '0'
*/
Couleur CouleurBlanc() ;

/**
 *@brief Retourne une Couleur neutre
 *@returns Couleur avec Couleur.nom = Vide, Couleur.hexa =01 , Couleur.symbole = ' '
*/
Couleur CouleurNeutre() ;

/**
 * @brief Retourne la couleur opposée à celle passée en entrée
 *
 * @param couleur : Couleur Blanc ou Noir
 *
 * @returns Couleur opposée à celle passsée en entrée
*/
Couleur obtenirCouleuropposee(Couleur couleur) ;



/**
 * @brief Retourne Vrai si la couleur entrée est la Couleur Neutre.
 *
 * @param couleur : Couleur Blanc ou Noir
 *
 * @returns estNeutre : booléen
*/bool estNeutre(Couleur couleur) ;



/**
 * @brief Retourne vrai si les couleurs entrées sont identiques.
 *
 * @param couleur1 : Couleur
 *
 * @param couleur2 : Couleur
 *
 * @returns Couleur opposée à celle passsée en entrée
*/
bool estEgalCouleur(Couleur couleur1, Couleur couleur2) ;
#endif