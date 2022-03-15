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
};

#endif