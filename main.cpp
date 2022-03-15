#include <iostream>
#include "point.h"
#include "forme.h"

using namespace std;

int main(){
  //Tests
  
  point * p1 = new point();
  point * p2 = new point(12, 25);
  point * p3 = new point(p2);

  cout << "Point p1 x = " << p1 -> GetX() << ", y = " << p1 -> GetY() <<endl;
  cout << "Point p2 x = " << p2 -> GetX() << ", y = " << p2 -> GetY() <<endl;
  cout << "Point p3 x = " << p3 -> GetX() << ", y = " << p3 -> GetY() <<endl;

  *p1 += *p2;
  cout << "Point p1 + p2, p1 = " << *p2 <<endl;


  rectangle * f = new rectangle(new point(34, 54));
  cout << "forme 1 : " << f << endl;
  *f += new point(34, 76);
  cout << "forme 1 translatée de x34 et y76 : " << f << endl;

  delete(p1);
  delete(p2);
  delete(p3);
  return 0;
  
}