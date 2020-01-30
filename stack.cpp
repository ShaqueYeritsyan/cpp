/*
A stack is an abstract data structure that contains a collection of elements.
Stack implements the LIFO mechanism i.e. the element that is pushed at the end is popped out first.
source: https://www.tutorialspoint.com/cplusplus-program-to-implement-stack-using-array
*/

#include <iostream>
template <class T>
class stackImplementation{
private:
T stack[100];
int n=100;
int top=-1;

public:
void push(int val) {
   if(top>=n-1)
      std::cout<<"Stack Overflow\n";
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
      std::cout<<"Stack Underflow\n";
   else {
      std::cout<<"The popped element is "<< stack[top] <<std::endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      std::cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
         std::cout<<stack[i]<<" ";
         std::cout<<std::endl;
   } else
      std::cout<<"Stack is empty";
}
};
int main() {
   stackImplementation <int> stackInt;
   int ch, val; 
   std::cout<<"1) Push in stack\n";
   std::cout<<"2) Pop from stack\n";
   std::cout<<"3) Display stack\n";
   std::cout<<"4) Exit\n";
   do {
      std::cout<<"Enter choice: \n";
      std::cin>>ch;
      switch(ch) {
         case 1: {   
            std::cout<<"Enter value to be pushed:\n";
            std::cin>>val;
            stackInt.push(val);
            break;
         }
         case 2: {
            stackInt.pop();
            break;
         }
         case 3: {
            stackInt.display();
            break;
         }
         case 4: {
            std::cout<<"Exit\n";
            break;
         }
         default: {
            std::cout<<"Invalid Choice\n";
         }
      }
   }while(ch!=4); 
      return 0;
}