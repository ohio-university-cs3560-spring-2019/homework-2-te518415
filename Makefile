all: prog1

prog1: bin/main.o lib/lib.a
	g++ -o prog1 bin/main.o lib/lib.a

main.o: bin/main.cc
	g++ -c main.cc

