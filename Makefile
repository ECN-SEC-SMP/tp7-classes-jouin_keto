all: main.out

main.out: main.o point.o forme.o
	g++ -o main.out main.o point.o forme.o

main.o: main.cpp
	g++ -c main.cpp

point.o: point.cpp
	g++ -c point.cpp

forme.o: forme.cpp
	g++ -c forme.cpp

