#include"Colonne.h";

int * testColonne(){
    int * res;
    for (int i = 0; i<8; i++) {
        res[i] = (ObtenirNumeroColonne(creerColonne(i)) == i);
    }
}


int main() {
    int * res = testColonne();
    for (int i =1; i < 8; i++) {
        printf('Test colonne%d ......... %d',i, res[i]);
    }
}