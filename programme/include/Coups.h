#ifndef COUPS_TYPE
#define COUPS_TYPE
#include "Coup.h"
#include<stdbool.h>
#include "ListeChainee.h"


typedef struct
{
    ListeChainee coups;
    int nbDeCoups;
} Coups;



/**
 * @brief crée un ensemble de coups vide
 * 
 * @returns coups : Coups
*/
Coups CreerCoups() ;



/** Ajoute un coup en tête de la liste de coups.
 * @param coups : Coups auxquels on veut 
 * @param coup : Coup à ajouter
 * @returns coups : ensemble de coups avec le coup ajouter
 * 
*/
void AjouterCoup(Coups*, Coup) ;


void RetirerCoup(Coups*, Coup) ;


/** Donne le nombre de coups dans l'ensemble Coups.
 * 
 * Utilise le champ nbDeCoups de la structure Coups
 * 
 * @param coups :  Ensemble dont on veut obtenir le nombre de coups
 * @returns int : nbDeCoups
*/
int NbCoups(Coups) ;


/** Donne la liste chaînée des coups dans l'ensemble Coups
 * 
 * 
 * @param coups :  Ensemble dont on veut obtenir le nombre de coups
 * @returns ListeChainée : coups
*/
Coup COUPS_ObtenirCoup(Coups) ;


/** Vérifie si un Coup est présent dans un ensemble Coups
 * 
 * Utilise le champ nbDeCoups de la structure Coups
 * 
 * @param coups : Ensemble de coups à vérifier
 * @param coup : coup à rechercher
 * @returns bool : nbDeCoups
*/
bool EstPresent(Coups, Coup) ;

#endif