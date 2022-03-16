#include "rectangle.h"

using namespace std;

void rectangle::operator+=(point const & p){
  for(int i = 0; i < 4; i++){
    this -> points[i] += p;
  }
}

rectangle::rectangle(point * p, int largeur, int hauteur) : forme(){

  this -> largeur = largeur;
  this -> hauteur = hauteur;

  this -> p = p;
  
  this -> points[0] = p;
  this -> points[1] = new point(p -> GetX() + largeur, p -> GetY());
  this -> points[2] = new point(p -> GetX() + largeur, p -> GetY() + hauteur);
  this -> points[3] = new point(p -> GetX(), p -> GetY() + hauteur);
}

int rectangle::perimetre(){
  return (this -> largeur * 2) + (this -> hauteur * 2);
}

int rectangle::surface(){
  return (this -> largeur) * (this -> hauteur);
}

ostream& operator<<(ostream & s, rectangle const & r){
  s << "("<< r.points[0]<< r.points[1]<< r.points[2]<< r.points[3] << ")";
  return s;
}