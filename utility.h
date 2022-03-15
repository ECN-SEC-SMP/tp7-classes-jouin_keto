#include <iostream>

using namespace std;

#ifndef utility_h
#define utility_cpp

class point{
  private:
  int x, y;
  public:
  //Constructeurs
  point(int x, int y); 
  point(const point * p);
  point();

  //Méthodes
  void translate(int x, int y);
  void translate(point * p);

  //Getters/Setters
  int GetX();
  int GetY();
};

#endif