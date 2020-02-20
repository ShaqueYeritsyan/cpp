# include <iostream>
#include <new>

class VectorClass1 {
public:
   VectorClass1 () {
      std::cout<< "Constructor\n";
   }
   // VectorClass1 (const VectorClass1& src) {
   //    std::cout<< "Copy constructor\n";
   // }
   // VectorClass1& operator=(const VectorClass1& src) {
   //    std::cout<<"Copy assignment\n";
   // }

   // VectorClasss1 (VectorClasss1&& src) {
   //    std::cout<<"Move constructor\n";
   // }

   // VectorClass1& operator=(VectorClass1&& src) {
   //    std::cout<<"Move assignment\n";
   //}
   virtual ~VectorClass1 () {
      std::cout<<"Destructor\n";
   }

   void allocateArray(int size) {
      try {
         int* myarray= new int[size];
      }
      catch (std::bad_alloc &  e) {
         std::cout << "Standard exception: " << e.what() << std::endl;
      }
   }

};

int main () {
   VectorClass1 v;
   v.allocateArray(10000000);
   return 0;
}