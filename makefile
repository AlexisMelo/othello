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
	rm -rf
	./*.log
	rm -rf ./*.aux
	rm -rf ./*.dvi
	rm -rf ./*.toc
	rm -rf ./*.out
