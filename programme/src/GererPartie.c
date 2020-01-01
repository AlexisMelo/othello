#include"../include/GererPartie.h"
void GererPartie(Couleur couleur,Couleur *plateau,void (*AfficherResultat)(Couleur *),void (*AfficherPlateau)(Couleur *),Coup (*ObtenirCoupJ1)(Couleur,Couleur *),void (*ObtenirCoupJ2)(Couleur,Couleur *)){
  char* j1 = "En Cours";
  char* j2 = "En Cours";
  while((EtatDeLaPartie(couleur,plateau)!="Terminée") && (j1 != "Bloqué" || j2 != "Bloqué")){
  j1 = EtatDeLaPartie(couleur,plateau);
  if (j1 == "En Cours"){
      JouerUnTour(plateau,ObtenirCoupJ1,couleur);
      AfficherPlateau(plateau);
   }
  j2 = EtatDeLaPartie(Inverser(couleur),plateau);
  if (j2 == "En Cours"){
      JouerUnTour(plateau,ObtenirCoupJ2,Inverser(couleur));
      AfficherPlateau(plateau);
  }
}
