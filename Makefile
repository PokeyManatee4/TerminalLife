OBJDIR = lib
OUTDIR = bin
CODEDIR = src

all:
	clang++ -Wall -std=c++17 $(CODEDIR)/main.cpp -o $(OUTDIR)/game
	chmod 755 ./bin/game

setup:
	@mkdir $(OBJDIR)
	@mkdir $(OUTDIR)
	
