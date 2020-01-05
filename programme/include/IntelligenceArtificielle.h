/**
 * \file IntelligenceArtificielle.h
 *
 * Fichier contenant la définition des fonctions pour obtenir un Coup d'une IA.
*/
#ifndef __IA__
#define __IA__

#include "Plateau.h"
#include "Joueur.h"
#include "Coups.h"
#include "Recherche_Coup.h"
#include "Couleur.h"

/**
 * Permet d'obtenir un Coup par une IA. Le Coup est calculé automatiquement,
 * la profondeur permet de spécifier combien de Coup à l'avance l'IA peut calculer son coup,
 * sachant que plus ce nombre est élevé plus l'IA sera lente à répondre.
 *
 * \param plateau Plateau de jeu
 * \param joueurAMaximiser Joueur dont on souhaite obtenir le meilleur coup possible
 * \param profondeur Profondeur de recherche de l'IA
 *
 * \return Meilleur Coup obtenu par l'IA
 */
Coup IA_MinMax(Couleur * plateau, Joueur joueurAMaximiser, int profondeur);

#endif
