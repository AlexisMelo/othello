#include"../include/GererPartie.h"

void PARTIE_SetOrdreJoueurs(Joueur* premierJoueur, Joueur* secondJoueur, Joueur j1, Joueur j2) {
  if (COULEUR_EstEgalCouleur(JOUEUR_ObtenirCouleur(j1), COULEUR_ObtenirCouleurNoir())) {
    *premierJoueur = j1;
    *secondJoueur = j2;
  }
  else {
    *premierJoueur = j2;
    *secondJoueur = j1;
  }
}

bool PARTIE_EstPartieTerminee(Couleur * plateau, bool j1PeutJouer, bool j2PeutJouer) {
  if (!j1PeutJouer && !j2PeutJouer) {
    return true;
  }
  else if (PLATEAU_EstRempli(plateau)) {
    return true;
  }
  return false;
}

bool PARTIE_JoueurPeutJouer(Couleur * plateau, Joueur joueur) {
  if (COUPS_ObtenirNombreDeCoups(plateau, JOUEUR_ObtenirCouleur(joueur)) == 0) {
    return false;
  }
  return true;
}

void PARTIE_FaireUnePartie(void (*AfficherResultat)(Couleur *),void (*AfficherPlateau)(Couleur *), Joueur j1, Joueur j2){
  Couleur* plateau = PLATEAU_CreerPlateau();
  PLATEAU_InitialiserPlateau(plateau);
  PARTIE_GererPartie(AfficherResultat,AfficherPlateau,j1,j2,plateau);
}

void PARTIE_GererPartie(void (*AfficherResultat)(Couleur *),void (*AfficherPlateau)(Couleur *),Joueur j1 ,Joueur j2,Couleur * plateau) {
  bool j1PeutJouer = true;
  bool j2PeutJouer = true;

  bool partieTerminee = false;

  Joueur premierJoueur, secondJoueur;
  PARTIE_SetOrdreJoueurs(&premierJoueur, &secondJoueur, j1, j2);

  while(!partieTerminee){
    j1PeutJouer = PARTIE_JoueurPeutJouer(plateau, premierJoueur); // à améliorer en stockant chercherTousLesCoups et le faire passer dans le cas où il peut jouer
    if (j1PeutJouer){
        JouerUnTour(plateau,j1PeutJouer);
        AfficherPlateau(plateau);
        partieTerminee = PARTIE_EstPartieTerminee(plateau, j1PeutJouer, j2PeutJouer);
     }

    j2PeutJouer = PARTIE_JoueurPeutJouer(plateau, secondJoueur);
    if (j2PeutJouer){
        JouerUnTour(plateau,j2PeutJouer);
        AfficherPlateau(plateau);
    }
    partieTerminee = PARTIE_EstPartieTerminee(plateau, j1PeutJouer, j2PeutJouer);
  }

  AfficherResultat(plateau);
}
