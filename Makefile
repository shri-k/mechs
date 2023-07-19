all: test

test: test.cpp
	g++ -g -Wall test.cpp -o test
