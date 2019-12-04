void InitialiserPlateau(Plateau *p){
  Couleur neutre, blanc, noir;
  neutre=CreerNeutre();
  blanc=CreerBlanc();
  noir=CreerNoir();
  for (i=1;i<=ObtenirTaille(*p);i++){
    for (j=1;j<=ObtenirTaille(*p);j++){
      JouerCoup(p,Coup(neutre,Position(Ligne(i),Colonne(j))));
    }
  }
  JouerCoup(p,Coup(blanc,Position(Ligne(ObtenirTaille(p)/2),Colonne(ObtenirTaille(p)/2))));
  JouerCoup(p,Coup(blanc,Position(Ligne(ObtenirTaille(p)/2+1),Colonne(ObtenirTaille(p)/2+1))));
  JouerCoup(p,Coup(blanc,Position(Ligne(ObtenirTaille(p)/2),Colonne(ObtenirTaille(p)/2+1))));
  JouerCoup(p,Coup(blanc,Position(Ligne(ObtenirTaille(p)/2+1),Colonne(ObtenirTaille(p)/2))));
}
