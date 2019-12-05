#include <iostream>

class A {
    public:
    A() {
        std::cout<<  " Constructor A"<<"\n";
    }
    
    ~A() {
        std::cout<< "Destructor A" << "\n";
    }
};

class C {
    public:
    C() {
        std::cout<<  " Constructor C"<<"\n";
    }
    
    ~C() {
        std::cout<< "Destructor C" << "\n";
    }
};

class B : public C {
    public:
    B() {
        std::cout<<  " Constructor B"<<"\n";
    }
        
    A a;
    
    ~B() {
        std::cout<< "Destructor B" << "\n";
    }
};

int main() {
B b;
}