#include "carre.h"

carre::carre(point * p, int cote) : forme(){
  this -> p = p;
  this -> cote = cote;
  this -> points[0] = p;
  this -> points[1] = new point(p -> GetX() + cote, p -> GetY());
  this -> points[2] = new point(p -> GetX() + cote, p -> GetY() + cote);
  this -> points[3] = new point(p -> GetX(), p -> GetY() + cote);
}

float carre::surface(){
  
}

float carre::perimetre(){
  
}

void carre::operator+=(point const & p){
  for(int i = 0; i < 4; i++){
    this -> points[i] += p;
  }
}

ostream& operator<<(ostream & s, carre const & c){
  s << "("<< c.points[0]<< c.points[1]<< c.points[2]<< c.points[3] << ")";
}