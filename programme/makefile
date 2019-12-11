all : bin/Othello

bin/Othello : src/Othello.o src/menu.o src/menuLigneCommande.o src/menuGraphique.o
	gcc -o bin/Othello src/Othello.o src/menu.o src/menuLigneCommande.o src/menuGraphique.o

src/menu.o : src/menu.o
	gcc -o src/menu.o -c -Wall -pedantic -Iinclude src/menu.c

src/menuLigneCommande.o : src/menuLigneCommande.o
	gcc -o src/menuLigneCommande.o -c -Wall -pedantic -Iinclude src/menuLigneCommande.c

src/menuGraphique.o : src/menuGraphique.o
	gcc -o src/menuGraphique.o -c -Wall -pedantic -Iinclude src/menuGraphique.c

src/Othello.o : src/Othello.o
	gcc -o src/Othello.o -c -Wall -pedantic -Iinclude src/Othello.c
