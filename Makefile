OBJDIR = lib
OUTDIR = bin
CODEDIR = src

all:
	g++ $(CODEDIR)/main.cpp -o $(OUTDIR)/game
	chmod 777 ./bin/game

setup:
	@mkdir $(OBJDIR)
	@mkdir $(OUTDIR)
	
