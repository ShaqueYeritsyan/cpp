/*Գրել class Shape, ժառանգել class Circle, Rectangle, Triangle: 
Ունենալ մակերես ու պարագիծ հաշվող ֆուկցիաներ Shape class-ում և overload անել derived class-ներում։
Օգտագործել constructor ները իրար կապելու մելանիզմը*/
#include <iostream>

class Shape {
public:
   Shape() {
   std::cout<< "Constrictor of shape \n";
   }
   int getArea() {return 0;};
   int getperimeter() {return 0;}; 

};

class Rectangle: public Shape {
   double width;
   double height;

   public:
      Rectangle(double w, double h) : width(w), height(h) {}

      double getArea() { 
         return width * height; 
      }
      double getperimeter () {
         return 2 * (width + height);
      }
};

class Triangle: public Shape {
   double a;
   double b;
   double c;
   double height_c;

   public:
      Triangle(double A, double B, double C, double h) : a(A), b(B), c(C), height_c(h) {}

      double getArea() { 
         return c * height_c/2; 
      }
      double getperimeter () {
         return (a + b + c);
      }
};

class Cycle: public Shape {
   double r;

   public:
      Cycle(double R) : r(R){}

      double getArea() { 
         return r*r*3.14; 
      }
      double getperimeter () {
         return 6.28 * r;
      }
};

int main(void) {
   Rectangle Rect(5, 7);
   std::cout << "Rectangle area: " << Rect.getArea() <<"\n";
   std::cout <<"Rectangle Perimeter: " <<Rect.getperimeter() <<"\n";

   Triangle Triang(3.0, 4.0, 5.0, 2.4);
   std::cout << "Triangle area: " << Triang.getArea() << "\n";
   std::cout <<"Rectangle Perimeter: " <<Triang.getperimeter() <<"\n";

   Cycle C(1.0);
   std::cout << "Cycle area: " << C.getArea() << "\n";
   std::cout <<"Cycle Perimeter: " <<C.getperimeter() <<"\n";

   return 0;
}