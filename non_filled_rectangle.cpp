/*Write a program that draws a non-filled rectangle on the console, with its center point also marked,using user-provided odd (non-divisible by 2) sizes and symbol.
The symbol will be provided by the user on the command-line.
The sizes will be taken from standard input (std::cin).

For example, if width is 7, height is 5 and symbol is *, then the output should be:

*******
*     *
*  *  *
*     *
*******

Perform all necessary error handling for preventing the program from doing any undesirable things.
*/

#include <iostream>
#include <iomanip>

int main (int argc, char * argv[]) {

    int height = 5;
    int width = 7;

    if (argv[1] == NULL) {
        std::cout << "Please try again with a valid symbol";
        return 1;
    }

    std::cout << "Enter a valid odd number for height: ";
    if ((std::cin >> height) && (height%2 == 1)) {
        std::cout << "height: " << height << "\n";
    }
    else {
        std::cout << "Incorrect value, please try again\n";
        return 1;
    }

    std::cout << "Enter a valid odd number for width: ";
    if  ((std::cin >> width) && (width%2 == 1)) {
        std::cout << "width: " << width << "\n";
    }
    else {
        std::cout << "Incorrect value, please try again\n";
        return 1;
    }

    // first row
    for(int i = 1; i <= width; ++i) {
        std::cout << argv[1];
        }
    std::cout << "\n";

    // Print sides
    for(int i = 1; i <= height - 2; ++i) {
        if (i == (height-2)/2+1) {
            std::cout << argv[1] << std::setw(width/2) << std::right << argv[1];
            std::cout << std::setw(width/2) << std::right << argv[1]<<"\n";
        }
        else {
            std::cout << std::setw(width - 1) << std::left << argv[1]  << argv[1] << "\n";
        }
    }

    // bottom row
    for(int i = 1; i <= width; ++i) {
        std::cout << argv[1];
        }
    std::cout << "\n";

    return 0;
}
