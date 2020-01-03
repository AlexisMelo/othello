
#ifndef __COUPS__
#define __COUPS__

#include <stdbool.h>
#include "Coup.h"

/**
 * \brief le type Coups permet de stocker plusieurs coups
 *
 */
typedef struct Coups{
  Coup lesCoups[64];
  unsigned int nbCoups;
}Coups;
/**
 * \brief Permet de creer une liste vide.
 * \return Coups
 *
 */
Coups COUPS_creerCoups();

/**
 * \brief Renvoie VRAI si la liste est vide, FAUX sinon.
 * \param coups une liste de coups
 * \return Booléen
 */
bool COUPS_estVide(Coups coups);

/**
 * \brief Procédure permettant d'ajouter un coup à une liste de coups.
 * \param pCoups la liste de coup à laquelle on ajoute le coup
 * \param coup le coup a ajouter
 */
void COUPS_ajouterCoup(Coups *pCoups, Coup coup);

/**
 * \brief Procédure permettant de retirer le premier coup d'une liste de coups.
 * \param pCoups la liste à laquelle on retire le premier coup
 */
void COUPS_retirerCoup(Coups *pCoups);

/**
 * \brief Renvoie le premier coup d'une liste de coups.
 * \param coups la liste de coups dont on veut le premier coup
 * \return Coup
 */
Coup COUPS_obtenirCoup(const Coups coups);

/**
 * \brief Renvoie le nombre de coups dans une liste de coups.
 * \param coups la liste de coups dont on veut le nombre de coups
 * \return unsigned int
 */
unsigned int COUPS_nbCoups(Coups coups);
#endif
