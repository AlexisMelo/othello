#include"Recherche_Coup.h"

Coups rechercherTousLesCoups (Plateau plateauDeJeu, Couleur joueurActuel) {
    Coups lesCoups;
    int Taille = obtenirTaille(plateauDeJeu);
    int i, j;
    for(i=0 ; i < Taille ; i++) {
        for(j=0 ; j < Taille ; j++) {
            if (rechercherUnCoup(plateauDeJeu, joueurActuel, creerPosition(i,j))) {
                ajouterCoup (&lesCoups, creerCoup(creerPosition(i,j), joueurActuel));
            }

        }
    }
return lesCoups;
}