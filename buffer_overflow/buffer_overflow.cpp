#include <iostream>

int main () {
    //auth = 0 in stack
    int auth = 0;
    //name = 6byte in stack
    //check buffer_overflow1.png
    char name[6];
    //if name != 6 byte then bytes are moving to auth and auth is no more 0
    //check buffer_overflow2.png
    std::cin>>name;
    if (auth) {
        std::cout << name << '\n';
        std::cout << "Secret info\n";
    }
    return 0;
    }
