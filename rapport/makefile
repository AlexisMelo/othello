OUTPUTDIR = ..

all :
	$(MAKE) report

rapport :
	pdflatex -interaction nonstopmode -halt-on-error -file-line-error -output-directory $(OUTPUTDIR)/ ./sourcesTEX/Rapport_BenayadLoudiyi-MeloDaSilva-Mesbah-Saivres-Si.tex
	pdflatex -interaction nonstopmode -halt-on-error -file-line-error -output-directory $(OUTPUTDIR)/ ./sourcesTEX/Rapport_BenayadLoudiyi-MeloDaSilva-Mesbah-Saivres-Si.tex
	find $(OUTPUTDIR) -type f -name '*.log' -exec rm {} +
	find $(OUTPUTDIR) -type f -name '*.out' -exec rm {} +
	find $(OUTPUTDIR) -type f -name '*.toc' -exec rm {} +
	find $(OUTPUTDIR) -type f -name '*.dvi' -exec rm {} +
	find $(OUTPUTDIR) -type f -name '*.aux' -exec rm {} +

clean :
	find $(OUTPUTDIR) -type f -name '*.pdf' -exec rm {} +
	find $(OUTPUTDIR) -type f -name '*.log' -exec rm {} +
	find $(OUTPUTDIR) -type f -name '*.out' -exec rm {} +
	find $(OUTPUTDIR) -type f -name '*.toc' -exec rm {} +
	find $(OUTPUTDIR) -type f -name '*.dvi' -exec rm {} +
	find $(OUTPUTDIR) -type f -name '*.aux' -exec rm {} +
	find $(OUTPUTDIR) -type f -name '*.o' -exec rm {} +
	find $(OUTPUTDIR) -type f -name '*.a' -exec rm {} +
