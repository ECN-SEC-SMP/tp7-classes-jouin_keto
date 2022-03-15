#include "point.h"


point::point(int x, int y){
  this -> x = x;
  this -> y = y;
}

point::point(){
  this -> x = 0;
  this -> y = 0;
}

point::point(point * p){
  this -> x = p -> GetX();
  this -> y = p -> GetY();
}

void point::translate(point * p){
  this -> x += p -> GetX();
  this -> y += p -> GetY();
}

void point::translate(int x, int y){
  this -> x += x;
  this -> y += y;
}

int point::GetX() const{
  return this -> x;
}

int point::GetY() const{
  return this -> y;
}

void point::SetX(int x){
  this -> x = x;
}

void point::SetY(int y){
  this -> y = y;
}

ostream& operator<<(ostream & s, point const & p){
  s << "x : "<< p.GetX()<<", y : " << p.GetY();
  return s;
}
