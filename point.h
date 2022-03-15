#ifndef point_h
#define point_h

#include <iostream>

using namespace std;

class point{
  private:
  int x, y;
  public:
  //Constructeurs
  point(int x, int y); 
  point(point * p);
  point();

  //Méthodes
  void translate(int x, int y);
  void translate(point * p);

  //Getters/Setters
  int GetX() const;
  int GetY() const;
  void SetX(int x);
  void SetY(int y);

  //Surcharge opérateur
  void operator+=(point const & p);
};
ostream& operator<<(ostream & s, point const & p);

#endif