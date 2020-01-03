#include "Couleur.h"
#include "Plateau.h"
#include "time.h"

#define HORIZONTAL_OFFSET 2
#define VERTICAL_OFFSET 1

/**
 * @brief Affichage du plateau de jeu
 *
 * @param plateau Couleur * plateau de jeu
 */
void AFFICHAGE_AfficherPlateau(Couleur * plateau) ;

/**
 * @brief Affichage du plateau de jeu pour une partie en mode tournois
 *
 * @param plateau Couleur * plateau de jeu
 */
void AFFICHAGE_AfficherPlateauTournois(Couleur * plateau);

void InitialiserAffichagePlateau() ;

/**
 * @brief Affichage des résultats de fin d'une partie
 *
 * @param plateau Couleur * plateau de jeu
 */
void AFFICHAGE_AfficherResultatsPartie(Couleur * plateau, Joueur j1, Joueur j2);

/**
 * @brief Affichage des résultats de fin d'une partie dans une partie en mode tournois
 *
 * @param plateau Couleur * plateau de jeu
 */
void AFFICHAGE_AfficherResultatsPartieTournois(Couleur * plateau, Joueur j1, Joueur j2);
