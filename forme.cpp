#include "forme.h"

void rectangle::operator+=(point const & p){
  for(int i = 0; i < 4; i++){
    this -> points[i] += p;
  }
}

point * forme::GetP() const{
  return this -> p;
}

forme::forme(point * p){
  this -> p = p;
}

ostream& operator<<(ostream & s, rectangle const & r){
  s << "("<< r.points[0]<< r.points[1]<< r.points[2]<< r.points[3] << ")";
  return s;
}

rectangle::rectangle(point * p1, point * p2) : forme(new point(p1)) {
  point * p3 = new point (p1 -> GetX(), p2 -> GetY());
  point * p4 = new point (p2 -> GetX(), p1 -> GetY());

  this -> largeur = p2 -> GetX() - p1 -> GetX();
  this -> hauteur = p2 -> GetY() - p1 -> GetY();

  this -> points[0] = p1;
  this -> points[1] = p4;
  this -> points[2] = p2;
  this -> points[3] = p3;
}

rectangle::rectangle(point * p, int largeur, int hauteur) : forme(new point(p)){

  this -> largeur = largeur;
  this -> hauteur = hauteur;
  
  this -> points[0] = p;
  this -> points[1] = new point(p -> GetX() + largeur, p -> GetY());
  this -> points[2] = new point(p -> GetX() + largeur, p -> GetY() + hauteur);
  this -> points[3] = new point(p -> GetX(), p -> GetY() + hauteur);
}

float rectangle::perimetre(){
  return 0;
}

float rectangle::surface(){
  return 0;
}