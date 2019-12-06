Couleur GererPartie(Couleur couleur,Plateau *plateau,void (*AfficherResultat)(),void (*AfficherPlateau)(Plateau),Coup (*ObtenirCoupJ1)(),void (*ObtenirCoupJ2)()){
  while(EtatDeLaPartie(couleur,*plateau)!="Terminée"){
    if (EtatDeLaPartie(couleur,*plateau)=="En Cours"){
      plateau=JouerUnTour(plateau,ObtenirCoup,couleur);
      AfficherPlateau(*plateau);
    }
    couleur=Inverser(couleur);
  }
  AfficherResultat();
}
    
