#ifndef carre_h
#define carre_h

#include <iostream>
#include "forme.h"
#include "point.h"

using namespace std;

class carre : public forme{
  private:
  int cote;

  public:
  point points[4];

  //Constructeur
  carre(point * p, int cote);

  //Méthodes
  int surface();
  int perimetre();
  void operator+=(point const & p);
};

ostream& operator<<(ostream & s, carre const & c);

#endif