#include "Couleur.h"
#include "Plateau.h"
#include "time.h"

#define HORIZONTAL_OFFSET 2
#define VERTICAL_OFFSET 1

void AFFICHAGE_AfficherPlateau(Couleur * plateau) ;
void InitialiserAffichagePlateau() ;

/**
 * @brief Affichage des résultats de fin d'une partie
 *
 * @param plateau Couleur * plateau de jeu
 *
 */
void AFFICHAGE_AfficherResultatsPartie(Couleur * plateau);
