#include <iostream>
#include "point.h"

using namespace std;

#ifndef forme_h
#define forme_h

class forme{
  private :
  point * point;

  public :
  forme(point * p);

  void operator+=(point const & p);
};

ostream& operator<<(ostream & s, point const & p);

#endif