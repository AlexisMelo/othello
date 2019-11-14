all :
	cd ./Rapport && pdflatex -interaction nonstopmode -halt-on-error -file-line-error ./Framework.tex
	
clean :
	rm -rf ./Rapport/*.pdf
	rm -rf ./Rapport/*.log
	rm -rf ./Rapport/*.aux
	rm -rf ./Rapport/*.dvi
	rm -rf ./Rapport/*.toc
	rm -rf ./Rapport/*.out