#ifndef rectangle_h
#define rectangle_h

#include <iostream>
#include "forme.h"
#include "point.h"

using namespace std;

class rectangle : public forme{
  private:
  int largeur, hauteur;

  public :
  rectangle(point * p, int largeur, int hauteur);
  point points[4];
  virtual int surface();
  virtual int perimetre();
  void operator+=(point const & p);
};

ostream& operator<<(ostream & s, rectangle const & r);

#endif