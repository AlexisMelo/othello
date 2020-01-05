#ifndef __IA__
#define IA
#include "Plateau.h"
#include "Joueur.h"
#include "Coups.h"
#include "Recherche_Coup.h"
Coup IA_MinMax(Couleur * plateau, Joueur joueurAMaximiser, int Profondeur) ;
int IA_MinMaxExplorationRecursive(Joueur JoueurAMaximiser,Couleur joueurActuel, Couleur * plateau, int profondeurDepart) ;
#endif