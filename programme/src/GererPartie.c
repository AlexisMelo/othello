Couleur GererPartie(Couleur couleur,Plateau *plateau,void (*AfficherResultat)(Plateau),void (*AfficherPlateau)(Plateau),Coup (*ObtenirCoupJ1)(Couleur,Plateau),void (*ObtenirCoupJ2)(Couleur,Plateau)){
  while(EtatDeLaPartie(couleur,*plateau)!="Terminée"){
    if (EtatDeLaPartie(couleur,*plateau)=="En Cours"){
      plateau=JouerUnTour(plateau,ObtenirCoupJ1,couleur);
      AfficherPlateau(*plateau);
      if (EtatDeLaPartie(Inverser(couleur),*plateau)=="En Cours"){
	plateau=JouerUnTour(plateau,ObtenirCoupJ2,Inverser(couleur));
        AfficherPlateau(*plateau);
      }
    }
  }
  AfficherResultat();
}
    
