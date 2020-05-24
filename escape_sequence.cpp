/*
Write a program that prints all the types of valid escape sequences to the console,
and make a document containing a table which describes the behavior you observed with each of them.
Use statements like
 std::cout << “Welcome\tabroad” << std::endl;
written one after another in your program and try them out one after another (e.g. by debugging).

--------------------------------------------
 |Input               | Output            |
--------------------------------------------
 | Welcome\'abroad    | Welcome'abroad    |
--------------------------------------------
 | Welcome\"abroad    | Welcome"abroad    |
--------------------------------------------
 | Welcome\?abroad    | Welcome?abroad    |
--------------------------------------------
 | Welcome \\abroad   | Welcome \abroad   |
--------------------------------------------
 | \a                 | (audible bell)    |
--------------------------------------------
 | Welcome\babroad    | Welcomabroad      |
--------------------------------------------
 | Welcome\fabroad    |Welcome            |
                      |   abroad
--------------------------------------------
 | Welcome\nabroad    | Welcome		      |
                      | abroad

--------------------------------------------
 | Welcome\rabroad    | abroade           |
--------------------------------------------
 | Welcome\tabroad    | Welcome	abroad    |
--------------------------------------------
 | Welcome\vabroad    | Welcome           |
                      |    abroad
--------------------------------------------
 | \101               | A                 |
--------------------------------------------
 | \x42               | B                 |
--------------------------------------------
 | \uFFFD             | �                 |
--------------------------------------------

https://en.cppreference.com/w/cpp/language/escape
*/

#include <iostream>

int main () {
    std::cout<<"\\"<<"\'"<<" "<<"single quote: Welcome\'abroad"<<std::endl;
    std::cout<<"\\"<<"\""<<" "<<"double quote: Welcome\"abroad"<<std::endl;
    std::cout<<"\\"<<"\?"<<" "<<"question mark: Welcome\?abroad"<<std::endl;
    std::cout<<"\\"<<"\\"<<" "<<"backslash: Welcome \\abroad"<<std::endl;
    std::cout<<"\\"<<"a"<<" "<<"audible bell \a"<<std::endl;
    std::cout<<"\\"<<"b"<<" "<<"backspace: Welcome\babroad"<<std::endl;
    std::cout<<"\\"<<"f"<<" "<<"new page: Welcome\fabroad"<<std::endl;
    std::cout<<"\\"<<"n"<<" "<<"new line: Welcome\nabroad"<<std::endl;
    //https://stackoverflow.com/questions/7372918/whats-the-use-of-r-escape-sequence
    std::cout<<"\\"<<"r"<<" "<<"carriage return: Welcome\rabroad"<<std::endl;
    std::cout<<"\\"<<"t"<<" "<<"horizontal tab: Welcome\tabroad"<<std::endl;
    std::cout<<"\\"<<"v"<<" "<<"vertical tab: Welcome\vabroad"<<std::endl;
    //http://www.asciitable.com/
    std::cout<<"\\"<<"101"<<" "<<"arbitary octal value: "<<"\101"<<std::endl;
    std::cout<<"\\"<<"42"<<" "<<"arbitary hexademical value: "<<"\x42"<<std::endl;
    std::cout<<"\\"<<"uFFFD"<<" "<<"universal character name: "<<"\uFFFD"<<std::endl;
    return 0;
}
