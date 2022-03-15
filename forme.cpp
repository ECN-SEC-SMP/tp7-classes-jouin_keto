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