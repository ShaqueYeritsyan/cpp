/*. Write a program that calculates the Nth Fibonacci number and prints it on the console.
N will be the sole input of the program, and be taken from the standard input (std::cin). 
Then run your program, giving it different input values, and see how high you can go.
Explain why your program isn’t able to (reasonably) calculate the next Fibonacci number.
Think on what you could have done differently so that your program could go even higher, i.e. would be able to reasonably calculate some of the next Fibonacci numbers as well.
-----------------------------------------------------------------------------------------------
1. the highest N value my program is reasonably able to process is 46 
2. the program’s output (FibN value) for 46 is 1836311903
3. the program isn’t able to go higher because of out of range of 'int'
4. change 'int' to 'unsigned int' so that the program could go even higher
 ----------------------------------------------------------------------------------------------
*/

#include <iostream>

int fibonacci( int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main () {
    int N = 0;
    std::cout<<"Enter the number: ";
    std::cin>>N;
    std::cout<<N<<"th Fibonacci Number is "<<fibonacci (N)<<"\n";
    return 0;
}

