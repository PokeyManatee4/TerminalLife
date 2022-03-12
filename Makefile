OBJDIR = lib
OUTDIR = bin
CODEDIR = src

all:
	gcc $(CODEDIR)/main.cpp -o $(OUTDIR)/game
	chmod 755 ./bin/game

setup:
	@mkdir $(OBJDIR)
	@mkdir $(OUTDIR)
	
