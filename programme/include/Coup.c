#include"Coup.h";
#include"Position.h"
#include"Couleur.h";
#include<stdbool.h>;
#include<assert.h>;



Coup creerCoup(Position position, Couleur couleur){
    assert(!estNeutre(couleur));
    Coup resultat;
    resultat.couleur = couleur;
    resultat.position = position;
};


Couleur obtenirCouleur(Coup coup){
    return coup.couleur;
};

Position obtenirPosition(Coup coup){
    return coup.position;
};

bool estCoupValide(Coup coup){
    return estPositionValide(coup.position) && !estNeutre(coup.couleur);
}