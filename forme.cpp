#include "forme.h"

point * forme::GetP() const{
  return this -> p;
}

forme::forme(point * p){
  this -> p = p;
}

forme::forme(){
  this -> p = new point();
}

