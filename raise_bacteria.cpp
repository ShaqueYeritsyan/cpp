/* https://codeforces.com/problemset/problem/579/A

You are a lover of bacteria. You want to raise some bacteria in a box.

Initially, the box is empty. Each morning, you can put any number of bacteria into the box.
And each night, every bacterium in the box will split into two bacteria.
You hope to see exactly x bacteria in the box at some moment, 1 <= x <= 10^9

What is the minimum number of bacteria you need to put into the box across those days?

Input: 5  Output: 2
We can add one bacterium in the box in the first day morning and at the third morning there will be 4 bacteria in the box.
Now we put one more resulting 5 in the box. We added 2 bacteria in the process so the answer is 2.
5 = 101 = 2^2 + 2^0

Input: 8 Output: 1
We can put one in the first morning and in the 4-th morning there will be 8 in the box. So the answer is 1.
8 = 1000 = 2^4

*/

#include <iostream>

void raise_bacterias (int count) {
    if (count <= 0) {
        std::cout<<"Empty box"<<"\n";
        exit(0);
    }
    std::cout<<"To raise " << count <<" bacterias you need ";
    int min_count = 0;
    int day = 0;
    while(count > 0) {
        //convert decimal number to binary and count sum of binary digits.
        min_count = min_count+count % 2;
        count = count/2;
        day = day + 1;
    }
std::cout << min_count << " bacteria(s) and " << day << " days\n";
}

int main (){
    raise_bacterias(5);
    raise_bacterias(8);
    return 0;
}

