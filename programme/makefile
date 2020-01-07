CC=gcc
INCLUDEDIR = include
SRCDIR = src
CFLAGS = -Wall -pedantic
INCFLAGS = -I$(INCLUDEDIR)
BINDIR= bin
EXEC= othello
LIBDIR= lib
TESTDIR= tests
DOCDIR = ../doc

all : directories
	$(MAKE) prg
	$(MAKE) tests

directories : $(BINDIR)

$(BINDIR) :
	mkdir -p $(BINDIR)

prg : directories $(BINDIR)/$(EXEC)

$(BINDIR)/$(EXEC) : $(SRCDIR)/IntelligenceArtificielle.o $(SRCDIR)/ParcourirDirection.o $(SRCDIR)/RechercherCoup.o $(SRCDIR)/Coups.o $(SRCDIR)/GererPartie.o $(SRCDIR)/Affichage.o $(SRCDIR)/Position.o $(SRCDIR)/Plateau.o $(SRCDIR)/Direction.o $(SRCDIR)/Coup.o $(SRCDIR)/Othello.o $(SRCDIR)/Ligne.o $(SRCDIR)/Colonne.o $(SRCDIR)/Menu.o $(SRCDIR)/MenuGraphique.o $(SRCDIR)/MenuLigneCommande.o $(SRCDIR)/Joueur.o  $(SRCDIR)/Couleur.o
	$(CC)  -o $@ $^ $(LDFLAG)

$(SRCDIR)/%.o : $(SRCDIR)/%.c
	$(CC) -o $@ -c $< $(CFLAGS) $(INCFLAGS)

tests : $(TESTDIR)/testTypes $(TESTDIR)/testAff

$(TESTDIR)/testAff : $(TESTDIR)/testAffichage.o $(SRCDIR)/IntelligenceArtificielle.o $(TESTDIR)/testLigne.o $(TESTDIR)/testColonne.o $(TESTDIR)/testCouleur.o $(TESTDIR)/testCoup.o $(TESTDIR)/testCoups.o $(TESTDIR)/testPlateau.o $(SRCDIR)/Colonne.o $(SRCDIR)/Plateau.o $(SRCDIR)/Coup.o $(SRCDIR)/Coups.o $(SRCDIR)/ParcourirDirection.o $(SRCDIR)/Position.o $(SRCDIR)/Ligne.o $(SRCDIR)/Couleur.o $(TESTDIR)/testParcourirLesDirections.o $(TESTDIR)/testParcourirUneDirection.o $(SRCDIR)/Direction.o $(SRCDIR)/Affichage.o $(SRCDIR)/Joueur.o $(SRCDIR)/RechercherCoup.o $(TESTDIR)/testRechercheDesCoups.o $(TESTDIR)/testPlateau.o
		$(CC) -o $(TESTDIR)/testPlateauAff $^ -lcunit $(CFLAGS) -I$(TESTDIR)

$(TESTDIR)/testTypes : $(SRCDIR)/IntelligenceArtificielle.o $(TESTDIR)/testLigne.o $(TESTDIR)/testColonne.o $(TESTDIR)/testCouleur.o $(TESTDIR)/testCoup.o $(TESTDIR)/testCoups.o $(TESTDIR)/testPlateau.o $(TESTDIR)/TypesTests.o $(SRCDIR)/Colonne.o $(SRCDIR)/Plateau.o $(SRCDIR)/Coup.o $(SRCDIR)/Coups.o $(SRCDIR)/ParcourirDirection.o $(SRCDIR)/Position.o $(SRCDIR)/Ligne.o $(SRCDIR)/Couleur.o $(TESTDIR)/testParcourirLesDirections.o $(TESTDIR)/testParcourirUneDirection.o $(SRCDIR)/Direction.o $(SRCDIR)/Affichage.o $(SRCDIR)/Joueur.o $(SRCDIR)/RechercherCoup.o $(TESTDIR)/testRechercheDesCoups.o $(TESTDIR)/testPlateau.o
		$(CC) -o $(TESTDIR)/testTypes $^ -lcunit $(CFLAGS) -I$(TESTDIR)

$(TESTDIR)/%.o : $(TESTDIR)/%.c
		$(CC) -o $@ -c $< $(CFLAGS) $(INCFLAGS)

doc :
	doxygen Doxyfile

clean :
	rm -rf $(BINDIR)
	rm -rf $(LIBDIR)
	rm -rf $(SRCDIR)/*.o
	rm -rf $(DOCDIR)
