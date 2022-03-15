#ifndef forme_h
#define forme_h

#include <iostream>
#include "point.h"

using namespace std;

class forme{
  private :
  point * p;
  
  public :
  forme(point * p);
  virtual float surface()=0;
  virtual float perimetre()=0;
  point * GetP() const;
};

// test creation fille
class rectangle : public forme{
  private:
  int largeur, hauteur;

  public :
  rectangle(point * p1, point * p2);
  rectangle(point * p, int largeur, int hauteur);
  point points[4];
  virtual float surface();
  virtual float perimetre();
  void operator+=(point const & p);
};

ostream& operator<<(ostream & s, rectangle const & r);
#endif