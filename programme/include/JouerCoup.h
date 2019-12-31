#ifndef JouerCoup_h
#define JouerCoup_h
#include <stdio.h>
#include"Plateau.h"
#include"Coup.h"
#include"Couleur.h"

/**
 *@brief Capture les pions selon le pion posé.
 * 
 *@param plateauDeJeu : Couleur
 *
 *@param PositionDuCoupJoue : Position
 *
 *@param CouleurDuCoupJoue : Couleur
 *
*/

void CapturerPions(Couleur **plateau, Position PositionDuCoupJoue, Couleur joueurActuel) ;


/**
 *@brief Effectue un coup sur un plateau.
 * 
 *@param plateauDeJeu : Couleur
 *
 *@param coupJoue : Coup
 *
*/


void JouerCoup(Couleur * plateauDeJeu, Coup coupJoue);

#endif
