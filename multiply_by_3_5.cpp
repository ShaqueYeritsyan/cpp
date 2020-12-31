/* Given an integer x,
write a function that multiplies x with 3.5 
and then produce the integer (you need to calculate only the integer part).
You are not allowed to use *, /, % operators.
******************
* inut  * output *
******************
* 2     * 7      *
******************
* 7     * 24     *
******************
*/

#include <iostream>

/* 3,5x = 2x + x + x/2
2x -> left shift x by 1
x/2 -> right shift x by 1
if x is not an integer: invalid operands to binary expression
*/

int multiply_by_3_5 (int x) {
    std::cout<<" integer part of 3,5 * "<<x<<" : ";
    int result = (x<<1) + x + (x>>1);
    if (x < 0) {
        std::cout<<"WARNING: Bitwise operations for "<<x<< " are undefined: ";
    }
    return result;
}

int main () {
    std::cout<<multiply_by_3_5(2)<<'\n';
    std::cout<<multiply_by_3_5(7)<<'\n';
    std::cout<<multiply_by_3_5(-3)<<'\n';
    return 0;
}
