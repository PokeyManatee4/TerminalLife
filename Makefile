OBJDIR = lib
OUTDIR = bin
CODEDIR = src

all:
	gcc -c $(CODEDIR)/main.c -o $(OUTDIR)/game
	chmod a+x ./bin/game

setup:
	@mkdir $(OBJDIR)
	@mkdir $(OUTDIR)
	
