all: duel

duel: playercard.o duel.cpp
	g++ -g -Wall playercard.o duel.cpp -o duel

playercard.o: playercard.cpp playercard.h
	g++ -g -Wall -c playercard.cpp -o playercard.o
