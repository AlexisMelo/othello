#include"../include/InitialiserPlateau.h"


void InitialiserPlateau(Couleur *p){
  Couleur neutre, blanc, noir;
  neutre=CouleurNeutre();
  blanc=CouleurBlanc();
  noir=CouleurNoir();
  for (int i=1;i<=ObtenirTaille(p);i++){
    for (int j=1;j<=ObtenirTaille(p);j++){
      JouerCoup(p,CreerCoup(CreerPosition(CreerLigne(i),CreerColonne(j)),neutre));
    }
  }
  JouerCoup(p,creerCoup(creerPosition(creerLigne(ObtenirTaille(p)/2),creerColonne(ObtenirTaille(p)/2)), blanc));
  JouerCoup(p,creerCoup(creerPosition(creerLigne(ObtenirTaille(p)/2+1),creerColonne(ObtenirTaille(p)/2+1)), blanc));
  JouerCoup(p,creerCoup(creerPosition(creerLigne(ObtenirTaille(p)/2),creerColonne(ObtenirTaille(p)/2+1)), blanc));
  JouerCoup(p,Coupcreer(vPosition(creerLigne(ObtenirTaille(p)/2+1),creerColonne(ObtenirTaille(p)/2)), blanc));
}
