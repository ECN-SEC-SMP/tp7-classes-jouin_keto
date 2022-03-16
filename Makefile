all: main.out

main.out: main.o point.o forme.o rectangle.o carre.o
	g++ -o main.out main.o point.o forme.o rectangle.o carre.o

main.o: main.cpp
	g++ -c main.cpp

point.o: point.cpp
	g++ -c point.cpp

forme.o: forme.cpp
	g++ -c forme.cpp

rectangle.o: rectangle.cpp
	g++ -c rectangle.cpp

carre.o: carre.cpp
	g++ -c carre.cpp

