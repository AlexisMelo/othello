all :
	pwd
	pdflatex -interaction nonstopmode -halt-on-error -file-line-error -output-directory Rapport Rapport/FrameWork.tex
	rm -rf ./Rapport/*.log
	rm -rf ./Rapport/*.aux
	rm -rf ./Rapport/*.dvi
	rm -rf ./Rapport/*.toc
	rm -rf ./Rapport/*.out
clean :
	rm -rf ./Rapport/*.pdf
	rm -rf ./Rapport/*.log
	rm -rf ./Rapport/*.aux
	rm -rf ./Rapport/*.dvi
	rm -rf ./Rapport/*.toc
	rm -rf ./Rapport/*.out
