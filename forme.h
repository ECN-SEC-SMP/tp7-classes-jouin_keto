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
  void operator+=(point const & p);
};

ostream& operator<<(ostream & s, point const & p);

// test creation fille
class rectangle : public forme{

  public :

  virtual float surface();
  virtual float perimetre();
};

#endif