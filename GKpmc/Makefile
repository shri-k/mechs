all: driver

driver: tdoll.o echelon.o driver.cpp 
	g++ -g -Wall tdoll.o echelon.o driver.cpp -o driver

tdoll.o: tdoll.cpp tdoll.h
	g++ -g -Wall -c tdoll.cpp -o tdoll.o

echelon.o: echelon.cpp echelon.h tdoll.h
	g++ -g -Wall -c echelon.cpp -o echelon.o
