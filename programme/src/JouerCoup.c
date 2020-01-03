#include "JouerCoup.h"
#include <stdio.h>
#include <stdlib.h>


void CapturerPions(Couleur * plateau, Position PositionDuCoupJoue, Couleur joueurActuel){
    if(ParcourirUneDirection(*plateau, PositionDuCoupJoue, H, joueurActuel)){
        AppliquerDirection(PositionDuCoupJoue, H);
        while((EstPositionValide(PositionDuCoupJoue)) && (!EstEgalCouleur(joueurActuel, ObtenirCouleurDepuisPlateau(*plateau, PositionDuCoupJoue)))){
            PoserPion(plateau,CreerCoup(PositionDuCoupJoue ,joueurActuel));
        };
    };
    if(ParcourirUneDirection(*plateau, PositionDuCoupJoue, HD, joueurActuel)){
        AppliquerDirection(PositionDuCoupJoue, HD);
        while((EstPositionValide(PositionDuCoupJoue)) && (!EstEgalCouleur(joueurActuel, ObtenirCouleurDepuisPlateau(*plateau, PositionDuCoupJoue)))){
            PoserPion(plateau,CreerCoup(PositionDuCoupJoue ,joueurActuel));
        };
    };
    if(ParcourirUneDirection(*plateau, PositionDuCoupJoue, D, joueurActuel)){
        AppliquerDirection(PositionDuCoupJoue, D);
        while((EstPositionValide(PositionDuCoupJoue)) && (!EstEgalCouleur(joueurActuel, ObtenirCouleurDepuisPlateau(*plateau, PositionDuCoupJoue)))){
            PoserPion(plateau,CreerCoup(PositionDuCoupJoue ,joueurActuel));
        };
    };
    if(ParcourirUneDirection(*plateau, PositionDuCoupJoue, BG, joueurActuel)){
        AppliquerDirection(PositionDuCoupJoue, BG);
        while((EstPositionValide(PositionDuCoupJoue)) && (!EstEgalCouleur(joueurActuel, ObtenirCouleurDepuisPlateau(*plateau, PositionDuCoupJoue)))){
            PoserPion(plateau,CreerCoup(PositionDuCoupJoue ,joueurActuel));
        };
    };
    if(ParcourirUneDirection(*plateau, PositionDuCoupJoue, B, joueurActuel)){
        AppliquerDirection(PositionDuCoupJoue, B);
        while((EstPositionValide(PositionDuCoupJoue)) && (!EstEgalCouleur(joueurActuel, ObtenirCouleurDepuisPlateau(*plateau, PositionDuCoupJoue)))){
            PoserPion(plateau,CreerCoup(PositionDuCoupJoue ,joueurActuel));
        };
    };
    if(ParcourirUneDirection(*plateau, PositionDuCoupJoue, BG, joueurActuel)){
        AppliquerDirection(PositionDuCoupJoue, BG);
        while((EstPositionValide(PositionDuCoupJoue)) && (!EstEgalCouleur(joueurActuel, ObtenirCouleurDepuisPlateau(*plateau, PositionDuCoupJoue)))){
            PoserPion(plateau,CreerCoup(PositionDuCoupJoue ,joueurActuel));
        };
    };
    if(ParcourirUneDirection(*plateau, PositionDuCoupJoue, G, joueurActuel)){
        AppliquerDirection(PositionDuCoupJoue, G);
        while((EstPositionValide(PositionDuCoupJoue)) && (!EstEgalCouleur(joueurActuel, ObtenirCouleurDepuisPlateau(*plateau, PositionDuCoupJoue)))){
            PoserPion(plateau,CreerCoup(PositionDuCoupJoue ,joueurActuel));
        };
    };
    if(ParcourirUneDirection(*plateau, PositionDuCoupJoue, HG, joueurActuel)){
        AppliquerDirection(PositionDuCoupJoue, HG);
        while((EstPositionValide(PositionDuCoupJoue)) && (!EstEgalCouleur(joueurActuel, ObtenirCouleurDepuisPlateau(*plateau, PositionDuCoupJoue)))){
            PoserPion(plateau,CreerCoup(PositionDuCoupJoue ,joueurActuel));
        };
    };
}


void JouerCoup(Couleur * plateau, Coup coupJoue){
 //printf("%p,- %p", &plateauDeJeu, plateauDeJeu);
 PoserPion(plateauDeJeu, coupJoue);
 CapturerPions(plateauDeJeu, coupJoue.position, coupJoue.couleur);
}
