CC=gcc
TEST=test
TESTDIR = programme/tests
INCLUDEDIR = programme/include
SRCDIR = programme/src
CFLAGS = -Wall -pedantic 
INCFLAGS = -I$(INCLUDEDIR)

all :
	pwd
	pdflatex -interaction nonstopmode -halt-on-error -file-line-error -output-directory . ./rapport/sourcesTEX/Rapport_BenayadLoudiyi-MeloDaSilva-Mesbah-Saivres-Si.tex
	rm -rf ./*.log
	rm -rf ./.aux
	rm -rf ./*.dvi
	rm -rf ./*.toc
	rm -rf ./*.out

clean :
	rm -rf ./*.pdf
	rm -rf ./*.log
	rm -rf ./*.aux
	rm -rf ./*.dvi
	rm -rf ./*.toc
	rm -rf ./*.out
	rm -rf ./*.o
	rm -rf ./*.a

tests :	$(TESTDIR)/$(TEST)
$(TESTDIR)/test : $(TESTDIR)/testLigne.o $(TESTDIR)/testColonne.o $(TESTDIR)/testCouleur.o $(TESTDIR)/testPlateau.o $(TESTDIR)/TypesTests.o $(SRCDIR)/Colonne.o $(SRCDIR)/Coup.o $(SRCDIR)/Position.o $(SRCDIR)/Ligne.o $(SRCDIR)/Couleur.o $(SRCDIR)/Plateau.o $(SRCDIR)/Direction.o
		$(CC) -o $(TESTDIR)/test $^ -lcunit $(CFLAGS) -I$(TESTDIR)


$(TESTDIR)/%.o : $(TESTDIR)/%.c
		$(CC) -o $@ -c $< $(CFLAGS) $(INCFLAGS)
		
$(SRCDIR)/%.o : $(SRCDIR)/%.c
		$(CC) -o $@ -c $< $(CFLAGS) $(INCFLAGS)
	


	# $(CC) -o $(SRCDIR)/Colonne.o -c $(SRCDIR)/Colonne.c $(CFLAGS) $(INCFLAGS)
	# $(CC) -o $(TESTDIR)/testColonne.o -c $(TESTDIR)/testColonne.c $(CFLAGS) $(INCFLAGS)
	# ar -r programme/lib/libtestcolonne.a $(TESTDIR)/testColonne.o
	# $(CC) -o $(TESTDIR)/TypesTests.o -c $(TESTDIR)/TypesTests.c $(CFLAGS)
	# $(CC) -o $(TESTDIR)/test $(TESTDIR)/TypesTests.o $(TESTDIR)/testColonne.o $(SRCDIR)/Colonne.o -lcunit $(CFLAGS) -I$(TESTDIR)
