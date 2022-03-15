#include <iostream>

using namespace std;

#ifndef utility_h
#define utility_cpp

class point{
  private:
  int x, y;
  public:
  //Constructeurs
  point(int x = 0, int y = 0); 
  point(const point * p);
  point();

  //Méthodes
  void translate(int x, int y);
  void translate(point * p);

  //Getters/Setters
  int GetX();
  int GetY();
  void SetX(int x);
  void SetY(int y);
};

