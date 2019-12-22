void FaireUnePartie(Couleur couleur,void (*AfficherResultat)(Plateau),void (*AfficherPlateau)(Plateau),Coup (*ObtenirCoupJ1)(Couleur,Plateau),Coup (*ObtenirCoupJ2)(Couleur,Plateau)){
  Couleur *plateau;
  InitialiserPlateau(plateau);
  GererPartie(couleur,plateau,AficherResultat,AfficherPlateau,ObtenirCoupJ1,ObtenirCoupJ2);
}
