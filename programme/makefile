CC=gcc
INCLUDEDIR = include
SRCDIR = src
CFLAGS = -Wall -pedantic
INCFLAGS = -I$(INCLUDEDIR)
BINDIR= bin
EXEC= Othello
LIBDIR= lib
TESTDIR= tests
DOCDIR = ../doc

all : directories
	$(MAKE) prg
	$(MAKE) doc
	$(MAKE) tests

directories : $(BINDIR)

$(BINDIR) :
	mkdir -p $(BINDIR)

prg : directories $(BINDIR)/$(EXEC)

$(BINDIR)/$(EXEC) : $(SRCDIR)/IntelligenceArtificielle.o $(SRCDIR)/Parcourir_Direction.o $(SRCDIR)/Recherche_Coup.o $(SRCDIR)/Coups.o $(SRCDIR)/GererPartie.o $(SRCDIR)/Affichage.o $(SRCDIR)/Position.o $(SRCDIR)/Plateau.o $(SRCDIR)/Direction.o $(SRCDIR)/Coup.o $(SRCDIR)/Othello.o $(SRCDIR)/Ligne.o $(SRCDIR)/Colonne.o $(SRCDIR)/Menu.o $(SRCDIR)/MenuGraphique.o $(SRCDIR)/MenuLigneCommande.o $(SRCDIR)/Joueur.o  $(SRCDIR)/Couleur.o
	$(CC)  -o $@ $^ $(LDFLAG)

$(SRCDIR)/%.o : $(SRCDIR)/%.c
	$(CC) -o $@ -c $< $(CFLAGS) $(INCFLAGS)

tests : $(TESTDIR)/testTypes $(TESTDIR)/testAff

$(TESTDIR)/testAff : $(TESTDIR)/testLigne.o $(TESTDIR)/testColonne.o $(TESTDIR)/testCouleur.o $(TESTDIR)/testPlateau.o $(TESTDIR)/testAffichage.o $(SRCDIR)/Colonne.o $(SRCDIR)/Coup.o $(SRCDIR)/Position.o $(SRCDIR)/Ligne.o $(SRCDIR)/Couleur.o $(SRCDIR)/Plateau.o $(SRCDIR)/Direction.o $(SRCDIR)/AfficherPlateau.o $(SRCDIR)/InitialiserPlateau.o $(SRCDIR)/JouerCoup.o
		$(CC) -o $(TESTDIR)/testAff $^ -lcunit $(CFLAGS) -I$(TESTDIR)

$(TESTDIR)/testTypes : $(TESTDIR)/testLigne.o $(TESTDIR)/testColonne.o $(TESTDIR)/testCouleur.o $(TESTDIR)/testPlateau.o $(TESTDIR)/TypesTests.o $(SRCDIR)/Colonne.o $(SRCDIR)/Coup.o $(SRCDIR)/Position.o $(SRCDIR)/Ligne.o $(SRCDIR)/Couleur.o $(SRCDIR)/Plateau.o $(SRCDIR)/Direction.o $(SRCDIR)/JouerCoup.o
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
