OBJDIR = lib
OUTDIR = bin
CODEDIR = src

all:
	g++ -c $(CODEDIR)/main.cpp -o $(OUTDIR)/game
	chmod a+x ./bin/game

setup:
	@mkdir $(OBJDIR)
	@mkdir $(OUTDIR)
	
