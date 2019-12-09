/*Inheritence: Գրել class Shape, ժառանգել class Circle, Rectangle, Triangle: 
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

   Shape(const Shape& value){
   }

   ~Shape() {
   }

};

class Rectangle: public Shape {
private:
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

      Rectangle(const Rectangle& object2) {
         width = object2.width;
         height = object2.height;
      }

      Rectangle& operator=(const Rectangle& object2) {
         width = object2.width;
         height = object2.height;
      }


      ~Rectangle(){
      }
};

class Triangle: public Shape {
private:
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

      Triangle(const Triangle& object2) {
         a = object2.a;
         b = object2.b;
         c = object2.c;
         height_c = object2.height_c;
      }

      Triangle& operator=(const Triangle& object2) {
         a = object2.a;
         b = object2.b;
         c = object2.c;
         height_c = object2.height_c;
      }

      ~Triangle(){
      }
};

class Cycle: public Shape {
private:
   double r;

   public:
      Cycle(double R) : r(R){}

      double getArea() { 
         return r*r*3.14; 
      }
      double getperimeter () {
         return 6.28 * r;
      }

      Cycle(const Cycle& object2) {
         r = object2.r;
      }

      Cycle& operator=(const Cycle& object2) {
         r = object2.r;
      }
      ~Cycle(){
      }
};

int main() {


   Rectangle Rect(5, 7);

   /*Usage of operator=
   Rectangle Rect3(5, 5);
   Rect = Rect3;*/

   /*Usage of Copy constructor
   Rectangle Rect2(Rect);*/

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
