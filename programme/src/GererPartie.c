Couleur GererPartie(Couleur couleur,void (*AfficherPlateau)(Plateau),Coup (*ObtenirCoupJoueur)(),void (*CalculPoint)()){
    while(EtatDeLaPartie!="En Cours"){
    plateau=JouerUnTour(plateau,ObtenirCoupJoueur,couleur);
    AfficherPlateau(plateau);
    couleur=Inverser(couleur);
  }
}
    
