#include "forme.h"

void forme::operator+=(point const & p){
  this -> p -> SetX(p.GetX());
  this -> p -> SetY(p.GetY());
}

point * forme::GetP() const{
  return this -> p;
}

forme::forme(point * p){
  this -> p = p;
}

ostream& operator<<(ostream & s, forme const & f){
  point * cp = f.GetP();
  s << "(x : "<< cp -> GetX()<<", y : " << cp -> GetY() << ")";
  return s;
}

rectangle::rectangle(point * p1, point * p2) : forme(new point()) {
  point * p3 = new point (p1 -> GetX(), p2 -> GetY());
  point * p4 = new point (p1 -> GetY(), p2 -> GetX());
}

float rectangle::perimetre(){
  return 0;
}

float rectangle::surface(){
  return 0;
}