#include <iostream>
#include <cmath>
 
using namespace std;

// Base class
class Shape {
   public:
      void seta(double i) {
         a = i;
      }
      void setb(double j) {
         b = j;
      }
      void setc(double k) {
         b = k;
      }
 
   protected:
      double a;
      double b;
      double c;
      double r;
};

// Derived class
class Rectangle: public Shape {
   public:
      int getArea() { 
         return (a * b); 
      }
      int getperimeter () {
         return (a+b+a+b);
      }
};

int main(void) {
   Rectangle Rect;
   Rect.seta(5);
   Rect.setb(7);
   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;
   cout <<"Perimeter: " <<Rect.getperimeter() << endl;

   return 0;
}