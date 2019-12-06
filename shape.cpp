#include <iostream>
#include <cmath>
 
using namespace std;

// Abstract class
class Shape {
public:
   Shape() {
   cout<< "Constrictor of shape \n";
   }
   int getArea() {return 0;};
   int getperimeter() {return 0;}; 

};

// Derived class
class Rectangle: public Shape {
   double width;
   double height;

   public:
      Rectangle(double w, double h) : width(w), height(h) {}

      int getArea() { 
         return width * height; 
      }
      int getperimeter () {
         return 2 * (width + height);
      }
};

int main(void) {
   Rectangle Rect(5,7);
   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;
   cout <<"Perimeter: " <<Rect.getperimeter() << endl;

   return 0;
}