OBJDIR = lib
OUTDIR = bin
CODEDIR = src

all:
	g++ $(CODEDIR)/main.cpp -o $(OUTDIR)/game
	chmod a+x ./bin/game

setup:
	@mkdir $(OBJDIR)
	@mkdir $(OUTDIR)
	
