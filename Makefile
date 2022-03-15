main.out: main.o utility.o 
	g++ -o main.out main.o utility.o

main.o: main.cpp
	g++ -c main.cpp

utility.o: utility.cpp
	g++ -c utility.cpp
