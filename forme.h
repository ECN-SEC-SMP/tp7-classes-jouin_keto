#ifndef forme_h
#define forme_h

#include <iostream>
#include "point.h"

using namespace std;

class forme{
  protected :
  point * p;
  
  public :
  forme(point * p);
  forme();
  virtual int surface()=0;
  virtual int perimetre()=0;
  point * GetP() const;
};

#endif