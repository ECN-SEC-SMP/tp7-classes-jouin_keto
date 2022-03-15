#include "utlity.h"

point::point(int x = 0, int y = 0){
  this -> x = x;
  this -> y = y;
}

void point::translate(point * p){
  this -> x += p -> GetX();
  this -> y += P -> GetY();
}

void point::translate(int x, int y){
  this -> x += x;
  this -> y += y;
}