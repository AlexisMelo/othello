#include"../include/Coup.h"
#include"../include/Position.h"
#include"../include/Couleur.h"
#include"../include/CoupCollection.h"
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>


Coup * creerCoupVide(){
    Coup * presultat = (Coup *)malloc(sizeof(Coup));/* 
    presultat->couleur.nom = 1;
    strcpy(presultat->couleur.hexa, "AA");
    presultat->couleur.symbole = 'A'; */
    presultat->couleur = CouleurNeutre();
    presultat->position.ligne = 1;
    presultat->position.colonne = 1;/* 
Coup * CreerCoupVide(){
    Coup * presultat = (Coup *)malloc(sizeof(Coup));
    return presultat; */
}


<<<<<<< HEAD
Coup creerCoup(Position position, Couleur couleur){
    assert(!estNeutre(couleur));
    Coup * presultat = creerCoupVide();
    presultat->couleur.nom = couleur.nom;
    strcpy(presultat->couleur.hexa, couleur.hexa);
    presultat->couleur.symbole = couleur.symbole;
=======
Coup CreerCoup(Position position, Couleur couleur){
    assert(!EstNeutre(couleur));
    Coup * presultat = CreerCoupVide();
    presultat->couleur = couleur;
>>>>>>> ce0d436729dc23cfa530bd2b88cc21623e88cd43
    presultat->position = position;
    return *presultat;
}



<<<<<<< HEAD
bool estEgalCoup(Coup coup1, Coup coup2) {
    return (estEgalCouleur(coup1.couleur, coup2.couleur) && estEgalPosition(coup1.position, coup2.position));  // res;
=======
bool EstEgalCoup(Coup coup1, Coup coup2) {
    return EstEgalCouleur(coup1.couleur, coup2.couleur) && EstEgalPosition(coup1.position, coup2.position);
>>>>>>> ce0d436729dc23cfa530bd2b88cc21623e88cd43
    }


Couleur ObtenirCouleur(Coup coup){
    return coup.couleur;
}


Position ObtenirPosition(Coup coup){
    return coup.position;
}


bool EstCoupValide(Coup coup){
    return  EstPositionValide(coup.position) && !EstNeutre(coup.couleur);
}