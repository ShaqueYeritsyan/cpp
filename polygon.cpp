//Polymorphism: Գրել class Polygon, և ժառանգել Rectangle, Triangle
#include <iostream>

class Polygon {
public:
   Polygon() {
   std::cout<< "Constrictor of Polygon \n";
   }

   virtual double getArea() = 0;
   virtual double getperimeter() = 0; 

   Polygon(const Polygon& value){
   }

   virtual ~Polygon() {
   }

};

class Rectangle: public Polygon {
private:
   double width;
   double height;

   public:
      Rectangle(double w, double h) : width(w), height(h) {}

      virtual double getArea() { 
         return width * height; 
      }
      virtual double getperimeter () {
         return 2 * (width + height);
      }

      Rectangle(const Rectangle& object2) {
         width = object2.width;
         height = object2.height;
      }

      Rectangle* operator=(const Rectangle& object2) {
         width = object2.width;
         height = object2.height;
         return this;
      }

      virtual ~Rectangle(){
      }
};

class Triangle: public Polygon {
private:
   double a;
   double b;
   double c;
   double height_c;

   public:
      Triangle(double A, double B, double C, double h) : a(A), b(B), c(C), height_c(h) {}

      virtual double getArea() { 
         return c * height_c/2; 
      }
      virtual double getperimeter () {
         return (a + b + c);
      }

      Triangle(const Triangle& object2) {
         a = object2.a;
         b = object2.b;
         c = object2.c;
         height_c = object2.height_c;
      }

      Triangle* operator=(const Triangle& object2) {
         a = object2.a;
         b = object2.b;
         c = object2.c;
         height_c = object2.height_c;
         return this;
      }

      virtual ~Triangle(){
      }
};

int main() {

   Polygon *Rect = new Rectangle(5,7);
   std::cout << "Rectangle area: " << Rect->getArea() <<"\n";
   std::cout <<"Rectangle Perimeter: " <<Rect->getperimeter() <<"\n";

   Polygon *Triang = new Triangle(3.0, 4.0, 5.0, 2.4);
   std::cout << "Triangle area: " << Triang->getArea() << "\n";
   std::cout <<"Rectangle Perimeter: " <<Triang->getperimeter() <<"\n";

   return 0;
}
