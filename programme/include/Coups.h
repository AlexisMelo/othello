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
Coup COUPS_ObtenirCoup(Coups coups) ;
bool EstPresent(Coups, Coup) ;

#endif