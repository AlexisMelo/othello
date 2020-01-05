#include "Plateau.h"
#include "Joueur.h"
#include "Coups.h"
#include "Recherche_Coup.h"
#include "Couleur.h"

Coup IA_MinMax(Couleur * plateau, Joueur joueurAMaximiser);
int IA_MinMaxExplorationRecursive(Joueur JoueurAMaximiser,Couleur joueurActuel, Couleur * plateau, int profondeurDepart) ;
