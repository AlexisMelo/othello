void FaireUnePartie(Couleur couleur,void (*AfficherResultat)(Couleur *),void (*AfficherPlateau)(Couleur *),Coup (*ObtenirCoupJ1)(Couleur,Couleur *),void (*ObtenirCoupJ2)(Couleur,Couleur *)){
  Couleur *plateau;
  InitialiserPlateau(plateau);
  GererPartie(couleur,plateau,AficherResultat,AfficherPlateau,ObtenirCoupJ1,ObtenirCoupJ2);
}
