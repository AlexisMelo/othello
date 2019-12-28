#include"../include/Coup.h"
#include"../include/Position.h"
#include"../include/Couleur.h"
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>


Coup * CreerCoupVide(){
    Coup * presultat = (Coup *)malloc(sizeof(Coup));
    return presultat;
}


Coup CreerCoup(Position position, Couleur couleur){
    assert(!estNeutre(couleur));
    Coup * presultat = creerCoupVide();
    presultat->couleur = couleur;
    presultat->position = position;
    return *presultat;
}



bool EstEgalCoup(Coup coup1, Coup coup2) {
    return estEgalCouleur(coup1.couleur, coup2.couleur) && estEgalPosition(coup1.position, coup2.position);
    }


Couleur ObtenirCouleur(Coup coup){
    return coup.couleur;
}


Position ObtenirPosition(Coup coup){
    return coup.position;
}


bool EstCoupValide(Coup coup){
    return estPositionValide(coup.position) && !estNeutre(coup.couleur);
}