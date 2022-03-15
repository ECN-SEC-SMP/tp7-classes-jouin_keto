#include <iostream>
#include "point.h"

using namespace std;

#ifndef forme_h
#define forme_h

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

  private :
  point * point;

  public :
  forme(point * p);

  virtual float surface()=0;
  virtual float perimetre()=0;
  void operator+=(point const & p);

}

#endif