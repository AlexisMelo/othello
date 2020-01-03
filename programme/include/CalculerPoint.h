#ifndef CalculerPoint_h
#define CalculerPoint_h
#include <stdio.h>
#include"Couleur.h"
#include"Plateau.h"


/**
 *@brief Retourne le nombre de points d'une couleur sur un plateau donné.
 * 
 *@param p : Couleur
 *
 *@param couleur : Couleur
 *
 *@returns int
*/


int CalculerPoint(Couleur (*plateau)[64], Couleur couleur);

#endif
