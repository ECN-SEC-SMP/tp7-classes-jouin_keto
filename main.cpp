#include <iostream>
#include "point.h"
#include "forme.h"
#include "rectangle.h"
#include "carre.h"

using namespace std;

int main(){
  
  point * p1 = new point();
  point * p2 = new point(12, 25);
  point * p3 = new point(p2);

  cout << "Point p1 x = " << p1 -> GetX() << ", y = " << p1 -> GetY() <<endl;
  cout << "Point p2 x = " << p2 -> GetX() << ", y = " << p2 -> GetY() <<endl;
  cout << "Point p3 x = " << p3 -> GetX() << ", y = " << p3 -> GetY() <<endl;

  *p1 += *p2;
  cout << "Point p1 + p2, p1 = " << *p2 <<endl;

  rectangle * r = new rectangle(new point(10,10), 45, 13);
  cout << "rectangle : " << *r << endl; 
  *r += *(new point(34, 76));  //fonction de translation
  cout << "rectangle translatée de x34 et y76 : " << *r << endl;

  carre * c = new carre(new point(20,20), 33);
  cout << "carré : " << *c << endl;
  *c += *(new point(45,67));
  cout << "carré translaté de x45, y67 : " << *c << endl; 
  
  delete(p1);
  delete(p2);
  delete(p3);
  
  return 0;
}