/*For each arithmetic type in C++, print its size in bytes, and its minimum and maximum possible values (using std::numeric_limits).
Then try conversions between source and destination types where the source value is not representable in the destination type.
Try to explain the result, why exactly that value was produced, preferably also writing down the formula that you could put verbatim in a (scientific) calculator to arrive at that same result.
Try at least one example from the following categories:
-Source is a bigger unsigned, destination is a smaller unsigned
-Source is a bigger signed, destination is a smaller signed
-Source is a bigger floating-point, destination is a smaller floating-point
-Source is floating-point, destination is integral
-Source is integral, destination is floating-point
-Source is signed, destination is unsigned
-Source is unsigned, destination is smaller signed
-Source is bool
-Destination is bool

For number (8), the value is representable in the destination type of course, but this is just included in the list for completeness wrt. bool.
Arithmetic types are integer types, floating-point types, character types, and bool.

char-ի բոլոր հնարավոր արժեքները առանց կորուստ կարող են պահվել double-ում
ինֆորմացիայի կորստով փոխարկումներ պետք է անեք
-----------------------------------------------------------------------------------
source value | destination value | Formula
-----------------------------------------------------------------------------------
double: 5.99 | int: 5            | (Converting to an integer always rounds down)
-----------------------------------------------------------------------------------
--------------------------------
--------------------------------
--------------------------------
--------------------------------
--------------------------------
--------------------------------
bool: 1     | double: 0, float: 0;
bool: 0
-----------------------------------------------------------------------------------
int: 0       | bool: 0          | if source == 0 then destination == 0
int: 78      | bool: 1          | else destination == 1
double: 0.0  | bool: 0          |
double: 0.75 | bool: 1          |
double: 16.1 | bool: 1          |
short: 2     | bool: 1          |
------------------------------------------------------------------------------------
*/
#include <iostream>

int main () {

bool t = 0;
std::cout <<char(t) << "\n";


    std::cout << "Size of int: " << sizeof(int) << ". Values: [" <<std::numeric_limits<int>::min() << " ; " << std::numeric_limits<int>::max() << "]\n";
    std::cout << "Size of unsigned int: " << sizeof(unsigned) << ". Values: [" <<std::numeric_limits<unsigned>::min() << " ; " << std::numeric_limits<unsigned>::max() << "]\n";
    std::cout << "Size of long int: " << sizeof(long) << ". Values: [" << std::numeric_limits<long>::min() << " ; " << std::numeric_limits<long>::max() << "]\n";
    std::cout << "Size of unsigned long int: " << sizeof(unsigned long) << ". Values: [" <<std::numeric_limits<unsigned long>::min() << " ; " << std::numeric_limits<unsigned long>::max() << "]\n";
    std::cout << "Size of long long int: " << sizeof(long long) << ". Values: [" <<std::numeric_limits<long long>::min() << " ; " << std::numeric_limits<long long>::max() << "]\n";
    std::cout << "Size of unsigned long long int: " << sizeof(unsigned long long) << ". Values: [" <<std::numeric_limits<unsigned long long>::min() << " ; " << std::numeric_limits<unsigned long long>::max() << "]\n";
    std::cout << "Size of short: " << sizeof(short) << ". Values: [" <<std::numeric_limits<short>::min() << " ; " << std::numeric_limits<short>::max() << "]\n";
    std::cout << "Size of unsigned short: " << sizeof(unsigned short) <<". Values: [" <<std::numeric_limits<unsigned short>::min() << " ; " << std::numeric_limits<unsigned short>::max() << "]\n";
    // https://www.learncpp.com/cpp-tutorial/floating-point-numbers/
    std::cout << "Size of float: " << sizeof(float) << ". Values: [" <<std::numeric_limits<float>::min() << " ; " << std::numeric_limits<float>::max() << "]\n";
    std::cout << "Size of double: " << sizeof(double) << ". Values: [" <<std::numeric_limits<double>::min() << " ; " << std::numeric_limits<double>::max() << "]\n";
    std::cout << "Size of long double: " << sizeof(long double) << ". Values: [" <<std::numeric_limits<long double>::min() << " ; " << std::numeric_limits<long double>::max() << "]\n";
    std::cout << "Size of char: " << sizeof(char) << ". Values: [" <<std::numeric_limits<char>::min() << " ; " << std::numeric_limits<char>::max() << "]\n";
    std::cout << "Size of bool: " << sizeof(bool) << ". Values: [" <<std::numeric_limits<bool>::min() << " ; " << std::numeric_limits<bool>::max() << "]\n";

   return 0;
}
