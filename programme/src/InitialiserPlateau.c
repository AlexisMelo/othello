#include"../include/InitialiserPlateau.h"


void InitialiserPlateau(Couleur (*p)[64]){
  Couleur neutre, blanc, noir;
  neutre=CouleurNeutre();
  blanc=CouleurBlanc();
  noir=CouleurNoir();
  for (int i=1;i<=ObtenirTaille(p);i++){
    for (int j=1;j<=ObtenirTaille(p);j++){
      JouerCoup(p,CreerCoup(CreerPosition(CreerLigne(i),CreerColonne(j)),neutre));
    }
  }
  JouerCoup(p,CreerCoup(CreerPosition(CreerLigne(ObtenirTaille(p)/2),CreerColonne(ObtenirTaille(p)/2)), noir));
  JouerCoup(p,CreerCoup(CreerPosition(CreerLigne(ObtenirTaille(p)/2+1),CreerColonne(ObtenirTaille(p)/2+1)), noir));
  JouerCoup(p,CreerCoup(CreerPosition(CreerLigne(ObtenirTaille(p)/2),CreerColonne(ObtenirTaille(p)/2+1)), blanc));
  JouerCoup(p,CreerCoup(CreerPosition(CreerLigne(ObtenirTaille(p)/2+1),CreerColonne(ObtenirTaille(p)/2)), blanc));
}
