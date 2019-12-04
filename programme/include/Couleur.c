#include"Couleur.h";

Couleur CouleurNulle() {
    Couleur resultat;
    return resultat;
}

Couleur CouleurBlanc() {
    Couleur resultat = CouleurNulle();
    resultat.nom = Blanc;
    resultat.hexa[2] = '00';
    resultat.symbole = '0';
    return resultat;
}

Couleur CouleurNoir() {
    Couleur resultat = CouleurNulle();
    resultat.nom = Noir;
    resultat.hexa[2] = 'FF';
    resultat.symbole = 'X';
    return resultat;
}


Couleur CouleurBlanc() {
    Couleur resultat = CouleurNulle();
    resultat.nom = Vide;
    resultat.hexa[2] = '01';
    resultat.symbole = ' ';
    return resultat;
}

Couleur obtenirCouleuropposee(Couleur couleur) {
    switch (couleur.nom)
    {
    case Blanc:
        couleur.nom = Blanc;
        return couleur;
    case Noir:
        couleur.nom = Noir;
        return couleur;
    default:
        break;
    }
}