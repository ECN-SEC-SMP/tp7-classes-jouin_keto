#include <iostream>

using namespace std;

#ifndef utility_h
#define utility_cpp

class point{
  private:
  int x, y;
  public:
  //Constructeur
  point(int x = 0, int y = 0);

  //Méthodes
  void translate(point p);

  //Getters/Setters
  int GetX();
  int GetY();
};