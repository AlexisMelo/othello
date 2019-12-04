#include<stdio.h>;
#include"Couleur.h";

int testBlanc(){
    Couleur res1;
    Couleur blanc = CouleurBlanc();
    res1 = obtenirCouleuropposee(obtenirCouleuropposee(blanc));
    return res1.nom == blanc.nom && res1.hexa == blanc.hexa && res1.symbole == blanc.symbole;
}

int testNoir(){
    Couleur res1;
    Couleur noir = CouleurNoir();
    res1 = obtenirCouleuropposee(obtenirCouleuropposee(noir));
    return res1.nom == noir.nom && res1.hexa == noir.hexa && res1.symbole == noir.symbole;
}


int main(){
    int resBlanc = testBlanc();
    int resNoir = testNoir();
    printf('Test des blancs ......... %d', resNoir);
    printf('Test des noirs ......... %d', resNoir);
}