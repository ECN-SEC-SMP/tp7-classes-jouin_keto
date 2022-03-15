#include "forme.h"

forme::forme(point * p){
  this -> point = p;
}

void forme::operator+=(point const & p){
  this -> point -> SetX(p.GetX());
  this -> point -> SetY(p.GetY());
}

ostream& operator<<(ostream & s, forme const & f){
  s << "(x : "<< f.point.GetX()<<", y : " << f.point.GetY() << ")";
  return s;
}

rectange::rectangle(point const & p1, point const & p2) : forme { 
  point * p3 = new point (p1.GetX, p2.GetY);
  point * p4 = new point (p1.GetY, p2.GetX);
  
}