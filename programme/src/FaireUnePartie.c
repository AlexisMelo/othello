void FaireUnePartie(Couleur couleur,void (*AfficherResultat)(),void (*AfficherPlateau)(Plateau),Coup (*ObtenirCoupJ1)(),Coup (*ObtenirCoupJ2)()){
  Plateau *plateau;
  plateau=InitialiserPlateau();
  GererPartie(couleur,plateau,AficherResultat,AfficherPlateau,ObtenirCoupJ1,ObtenirCoupJ2);
}
