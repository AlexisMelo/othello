CC=gcc
TESTT=testTypes
TESTA=testAff
TESTDIR = programme/tests
INCLUDEDIR = programme/include
SRCDIR = programme/src
CFLAGS = -Wall -pedantic
INCFLAGS = -I$(INCLUDEDIR)
BINDIR=programme/bin
EXEC=Othello
LIBDIR=programme/lib



all : $(BINDIR)/$(EXEC)
	$(TESTDIR)/$(TEST)
	pwd
	pdflatex -interaction nonstopmode -halt-on-error -file-line-error -output-directory . ./rapport/sourcesTEX/Rapport_BenayadLoudiyi-MeloDaSilva-Mesbah-Saivres-Si.tex
	find . -type f -name '*.log' -exec rm {} +
	find . -type f -name '*.out' -exec rm {} +
	find . -type f -name '*.toc' -exec rm {} +
	find . -type f -name '*.dvi' -exec rm {} +
	find . -type f -name '*.aux' -exec rm {} +

exec : $(BINDIR)/$(EXEC)

$(BINDIR)/$(EXEC) : $(SRCDIR)/Othello.o $(SRCDIR)/Menu.o $(SRCDIR)/MenuGraphique.o $(SRCDIR)/MenuLigneCommande.o $(SRCDIR)/Aide.o
	$(CC)  -o $@ $^ $(LDFLAG)

$(SRCDIR)/%.o : $(SRCDIR)/%.c
	$(CC) -o $@ -c $< $(CFLAGS) $(INCFLAGS)


tests :	$(TESTDIR)/$(TESTT)		$(TESTDIR)/$(TESTA)
$(TESTDIR)/testAff : $(TESTDIR)/testLigne.o $(TESTDIR)/testColonne.o $(TESTDIR)/testCouleur.o $(TESTDIR)/testPlateau.o $(TESTDIR)/testAffichage.o $(SRCDIR)/Colonne.o $(SRCDIR)/Coup.o $(SRCDIR)/Position.o $(SRCDIR)/Ligne.o $(SRCDIR)/Couleur.o $(SRCDIR)/Plateau.o $(SRCDIR)/Direction.o $(SRCDIR)/AfficherPlateau.o $(SRCDIR)/InitialiserPlateau.o $(SRCDIR)/JouerCoup.o
		$(CC) -o $(TESTDIR)/testAff $^ -lcunit $(CFLAGS) -I$(TESTDIR)

$(TESTDIR)/testTypes : $(TESTDIR)/testLigne.o $(TESTDIR)/testColonne.o $(TESTDIR)/testCouleur.o $(TESTDIR)/testPlateau.o $(TESTDIR)/TypesTests.o $(SRCDIR)/Colonne.o $(SRCDIR)/Coup.o $(SRCDIR)/Position.o $(SRCDIR)/Ligne.o $(SRCDIR)/Couleur.o $(SRCDIR)/Plateau.o $(SRCDIR)/Direction.o $(SRCDIR)/JouerCoup.o
		$(CC) -o $(TESTDIR)/testTypes $^ -lcunit $(CFLAGS) -I$(TESTDIR)


$(TESTDIR)/%.o : $(TESTDIR)/%.c
		$(CC) -o $@ -c $< $(CFLAGS) $(INCFLAGS)programme/tests/testAff
		
$(SRCDIR)/%.o : $(SRCDIR)/%.c
		$(CC) -o $@ -c $< $(CFLAGS) $(INCFLAGS)

clean :
	find . -type f -name '*.pdf' -exec rm {} +
	find . -type f -name '*.log' -exec rm {} +
	find . -type f -name '*.out' -exec rm {} +
	find . -type f -name '*.toc' -exec rm {} +
	find . -type f -name '*.dvi' -exec rm {} +
	find . -type f -name '*.aux' -exec rm {} +
	find . -type f -name '*.o' -exec rm {} +
	find . -type f -name '*.a' -exec rm {} +
	rm -rf $(BINDIR)/*
	rm -rf $(LIBDIR)/*
	rm -rf $(SRCDIR)/*.o
	rm -rf $(TESTDIR)/*.o