#include<iostream>
#include<string>
using namespace std;

template <class T>
class swapTemplate {
    public:
    /* If you use "swap" for the function you will get the following error:
    " the call on the overloaded swap function is ambiguous"
    The STL already defines a template function named swap, so the compiler thinks you are overloading it.*/
    void swapnew(T& x,T& y)
    {
        T temp;
        temp=x;
        x=y;
        y=temp;
    }

};
    template <>
    void swapTemplate<char>::swapnew (char& x, char& y) {
        std::cout<<"Swap for char: \n";
        char temp;
        temp=x;
        x=y;
        y=temp;
    }
int main()
{
    swapTemplate <int> swapInt;
    int a = 44 ;
    int b = 66 ;
    cout<<"Before swap a: "<<a<<" b: "<<b<<"\n";
    swapInt.swapnew(a,b);
    cout<<"After swap a: "<<a<<" b: "<<b<<"\n";

    swapTemplate <float> swapFloat;
    float c = 4.4;
    float d = 6.6;
    cout<<"Before swap c: "<<c<<" d: "<<d<<"\n";
    swapFloat.swapnew(c,d);
    cout<<"After swap c: "<<c<<" d: "<<d<<"\n";
   
    swapTemplate <char> swapChar;
    char e='E';
    char f='F';
    cout<<"Before swap e: "<<e<<" f: "<<f<<"\n"; 
    swapChar.swapnew(e,f);
    cout<<"After swap e: "<<e<<" f: "<<f<<"\n";

    return 0;
}