#include "Coups.h"
#include "Coup.h"
#include "CoupCollection.h"
#include "ListeChainee.h"
#include<assert.h>
Coups creerCoups() {
    Coups resultat;
    resultat.coups = listeChainee();
    resultat.nbDeCoups = 0;
};


/** Ajoute un coup en tête de la liste de coups.
 * @param coups : Coups auxquels on veut 
 * @param coup : Coup à ajouter
 * @returns coups : ensemble de coups avec le coup ajouter
 * 
*/

Coups ajouterCoup(Coups coups, Coup coup) {
    LC_ajouter(&(coups.coups), &coup, fonctionCopierCoup);
    coups.nbDeCoups += 1;
    return coups;
};

/** Obtient le coup en tête de la liste chaînée de coups.
 * 
 * @param coups : Coups dont obtenir le premier Coup.
 * @returns Coup: Coup en tête
*/

Coup obtenirCoup(Coups coups){
    assert(coups.nbDeCoups != 0);
    return *(coups.coups);
};

/** Supprime coup en tête de la liste chaînée de coups.
 * 
 * @param coups : Coups dont on veut supprimer un Coup
 * @returns coups : Ensemble sans le coup supprimé
*/
Coups supprimerCoupEnTete(Coups coups){
    Noeud noeud = *(coups.coups);
    ListeChainee ls = noeud.listeSuivante;
    Coups resultat;
    resultat.coups = ls;
    resultat.nbDeCoups -= 1;
    fonctionLibererCoup((Coup*)(noeud.element));
    return resultat;
};

/** Donne le nombre de coups dans l'ensemble Coups.
 * 
 * Utilise le champ nbDeCoups de la structure Coups
 * 
 * @param coups :  Ensemble dont on veut obtenir le nombre de coups
 * @returns int : nbDeCoups
*/
int obtenirnombreDeCoups(Coups coups) {
    return coups.nbDeCoups;
};