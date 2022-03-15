#include "utlity.h"

point::point(int x = 0, int y = 0){
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
  this -> y += P -> GetY();
}

void point::translate(int x, int y){
  this -> x += x;
  this -> y += y;
}

int point::GetX(){
  return this -> x;
}

int point::GetY(){
  return this -> y;
}