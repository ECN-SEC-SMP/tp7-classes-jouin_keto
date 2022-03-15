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
};
ostream& operator<<(ostream & s, point const & p);


#endif