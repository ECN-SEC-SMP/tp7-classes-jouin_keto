#include "utlity.h"

point::point(int x = 0, int y = 0){
  this -> x = x;
  this -> y = y;
}

void point::translate(point p){
  
}

void point::translate(int x, int y){
  this -> x += x;
  this -> y += y;
}