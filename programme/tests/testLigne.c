#include"Ligne.h";

int * testLigne(){
    int * res;
    for (int i = 0; i<8; i++) {
        res[i] = obtenirNumeroLigne(creerLigne(i)) == i;
    }
}


int main() {
    int * res = testLigne();
    for (int i =1; i < 8; i++) {
        printf('Test ligne%d ......... %d',i, res[i]);
    }
}