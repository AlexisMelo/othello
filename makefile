CC=gcc -g
TEST=test
TESTDIR = programme/tests
INCLUDEDIR = programme/include
SRCDIR = programme/src
CFLAGS = -Wall -pedantic 
INCFLAGS = -I$(INCLUDEDIR)

all :
	pwd
	pdflatex -interaction nonstopmode -halt-on-error -file-line-error -output-directory . ./rapport/sourcesTEX/Rapport_BenayadLoudiyi-MeloDaSilva-Mesbah-Saivres-Si.tex
	find . -type f -name '*.log' -exec rm {} +
	find . -type f -name '*.out' -exec rm {} +
	find . -type f -name '*.toc' -exec rm {} +
	find . -type f -name '*.dvi' -exec rm {} +
	find . -type f -name '*.aux' -exec rm {} +
	
clean :
	find . -type f -name '*.pdf' -exec rm {} +
	find . -type f -name '*.log' -exec rm {} +
	find . -type f -name '*.out' -exec rm {} +
	find . -type f -name '*.toc' -exec rm {} +
	find . -type f -name '*.dvi' -exec rm {} +
	find . -type f -name '*.aux' -exec rm {} +
	find . -type f -name '*.o' -exec rm {} +
	find . -type f -name '*.a' -exec rm {} +

tests : $(TESTDIR)/$(TEST)
$(TESTDIR)/test : $(TESTDIR)/testParcourirUneDirection.o $(TESTDIR)/testParcourirLesDirections.o $(TESTDIR)/testRechercheDesCoups.o $(TESTDIR)/testLigne.o $(TESTDIR)/testColonne.o $(TESTDIR)/testCouleur.o $(TESTDIR)/testPlateau.o $(TESTDIR)/TypesTests.o $(SRCDIR)/Colonne.o $(SRCDIR)/Coup.o $(SRCDIR)/Position.o $(SRCDIR)/Ligne.o $(SRCDIR)/Couleur.o $(SRCDIR)/Plateau.o $(SRCDIR)/Direction.o $(SRCDIR)/Parcourir_Direction.o $(SRCDIR)/Recherche_Coup.o $(SRCDIR)/Coups.o $(SRCDIR)/ListeChainee.o $(SRCDIR)/CoupCollection.o
	$(CC) -o $(TESTDIR)/test $^ -lcunit $(CFLAGS) -I$(TESTDIR)
	
$(SRCDIR)/%.o : $(SRCDIR)/%.c
	$(CC) -o $@ -c $< $(CFLAGS) $(INCFLAGS)

$(TESTDIR)/%.o : $(TESTDIR)/%.c
	$(CC) -o $@ -c $< $(CFLAGS) $(INCFLAGS)
	

	
	


	# $(CC) -o $(SRCDIR)/Colonne.o -c $(SRCDIR)/Colonne.c $(CFLAGS) $(INCFLAGS)
	# $(CC) -o $(TESTDIR)/testColonne.o -c $(TESTDIR)/testColonne.c $(CFLAGS) $(INCFLAGS)
	# ar -r programme/lib/libtestcolonne.a $(TESTDIR)/testColonne.o
	# $(CC) -o $(TESTDIR)/TypesTests.o -c $(TESTDIR)/TypesTests.c $(CFLAGS)
	# $(CC) -o $(TESTDIR)/test $(TESTDIR)/TypesTests.o $(TESTDIR)/testColonne.o $(SRCDIR)/Colonne.o -lcunit $(CFLAGS) -I$(TESTDIR)
