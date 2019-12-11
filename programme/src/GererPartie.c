Couleur GererPartie(Couleur couleur,Plateau *plateau,void (*AfficherResultat)(),void (*AfficherPlateau)(Plateau),Coup (*ObtenirCoupJ1)(),void (*ObtenirCoupJ2)()){
  while(EtatDeLaPartie(couleur,*plateau)!="Terminée"){
    if (EtatDeLaPartie(couleur,*plateau)=="En Cours"){
      plateau=JouerUnTour(plateau,ObtenirCoupJ1,couleur);
      AfficherPlateau(*plateau);
      plateau=JouerUnTour(plateau,ObtenirCoupJ2,couleur);
      AfficherPlateau(*plateau);
    }
    couleur=Inverser(couleur);
  }
  AfficherResultat();
}
    
