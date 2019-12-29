#include"../include/Coup.h"
#include"../include/Position.h"
#include"../include/Couleur.h"
#include"../include/CoupCollection.h"
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>


Coup * creerCoupVide(){
    Coup * presultat = (Coup *)malloc(sizeof(Coup));
    return presultat;
}


Coup creerCoup(Position position, Couleur couleur){
    assert(!estNeutre(couleur));
    Coup * presultat = creerCoupVide();
    presultat->couleur = couleur;
    presultat->position = position;
    return *presultat;
}



bool estEgalCoup(Coup coup1, Coup coup2) {
    Coup coup1cop = creerCoup(creerPosition(creerLigne(1), creerColonne(1)), CouleurNeutre());
    coup1cop = *fonctionCopierCoup(&coup1);
    Coup coup2cop = creerCoup(creerPosition(creerLigne(1), creerColonne(1)), CouleurNeutre());
    coup2cop = *fonctionCopierCoup(&coup2);
    //printf("//-%d-//EEC/,,\n", obtenirNumeroLigne(coup1cop.position.ligne));
    //printf("//-%d-//EEC/,,\n", ObtenirNumeroColonne(coup2cop.position.colonne));
    bool res = estEgalCouleur(coup1cop.couleur, coup2cop.couleur) && estEgalPosition(coup1cop.position, coup2cop.position);
    //printf("//-%d-//EEC2/,,\n", obtenirNumeroLigne(coup1cop.position.ligne));
    //printf("//-%d-//EEC2/,,\n", ObtenirNumeroColonne(coup2cop.position.colonne));  // check
    return res;
    }


Couleur obtenirCouleur(Coup coup){
    return coup.couleur;
}


Position obtenirPosition(Coup coup){
    return coup.position;
}


bool estCoupValide(Coup coup){
    return estPositionValide(coup.position) && !estNeutre(coup.couleur);
}