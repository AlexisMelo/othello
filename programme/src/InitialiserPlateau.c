void InitialiserPlateau(Plateau *p){
  Couleur neutre, blanc, noir;
  neutre=CouleurNeutre();
  blanc=CouleurBlanc();
  noir=CouleurNoir();
  for (i=1;i<=ObtenirTaille(*p);i++){
    for (j=1;j<=ObtenirTaille(*p);j++){
      JouerCoup(p,CreerCoup(CreerPosition(CreerLigne(i),CreerColonne(j))),neutre);
    }
  }
  JouerCoup(p,Coup(blanc,Position(Ligne(ObtenirTaille(p)/2),Colonne(ObtenirTaille(p)/2))));
  JouerCoup(p,Coup(blanc,Position(Ligne(ObtenirTaille(p)/2+1),Colonne(ObtenirTaille(p)/2+1))));
  JouerCoup(p,Coup(blanc,Position(Ligne(ObtenirTaille(p)/2),Colonne(ObtenirTaille(p)/2+1))));
  JouerCoup(p,Coup(blanc,Position(Ligne(ObtenirTaille(p)/2+1),Colonne(ObtenirTaille(p)/2))));
}
