/*
Write a function template named utf_convert, which will convert texts from a source Unicode encoding to a target Unicode encoding.
The set of supported encodings will be: UTF-8, UTF-16, UTF-32.
The function declaration should look like this:
    template < typename InputIterator, typename OutputIterator >
    void utf_convert( InputIterator begin, InputIterator end, OutputIterator out );
Use std::iterator_traits<>::value_type to determine the code unit type, according to which you’ll figure out the source and target encodings.
The callers of this function will only supply models of OutputIterator for which std::iterator_traits<OutputIterator>::value_type isn’t void.
Do not use any libraries for implementing the actual conversions.
You should implement the conversions yourself, using the descriptions of the encodings and applying bitwise operators as necessary to achieve the result:
    https://en.wikipedia.org/wiki/UTF-8
    https://en.wikipedia.org/wiki/UTF-16
   https://en.wikipedia.org/wiki/UTF-32

Then, write a program that will use this function template to perform conversions as specified on its command-line.
The program will accept command-line arguments of the following form:
    <source-encoding> <source-file> <target-encoding> <target-file>
, where <source-encoding> and <target-encoding> can each have one of the following values (case-insensitive):  UTF-8  UTF-16  UTF-32
    I.e. uTF-8, UTF-8, UtF-8, utf-8, etc. should be processed in the exact same way
, and where <source-file> and <target-file> are the paths to the source and target files, respectively.
The target file should be overwritten if it already exists.

The source files will not have byte order marks (https://en.wikipedia.org/wiki/Byte_order_mark), and you should not write BOM to the target files either.
Assume native endianness for both the source and target files. 

Use binary mode for file input and output (very important!).
You can assume guaranteed valid inputs for the source encoding for now.
If you fancy to implement error handling on the input text validity however, then your utf_convert function should throw exceptions accordingly.

Exact text messages to use on various error conditions when running the program:
Invalid source encoding: encoding
Invalid target encoding: encoding
Failed to open file for reading
Failed to open file for writing

Topis: Algorithms & iterators, templates, Unicode, bitwise operations, file I/O, case-insensitive comparison, multiple dispatch

*/

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

template < typename InputIterator, typename OutputIterator >
    void utf_convert( InputIterator begin, InputIterator end, OutputIterator out ) {
        std::cout<<"utf convert \n";
}

int main (int argc, char * argv[]) {

  //If the number of command-line arguments is incorrect, the program should print line
  //Usage: executable-path <source-encoding> <source-file> <target-encoding> <target-file>
  if (argc != 5) {
    std::string path = static_cast<std::string>(std::filesystem::current_path());
    std::cout << "Usage: "<<path<<argv[0]<<" <source-encoding> <source-file> <target-encoding> <target-file>\n";
    return 1;
  }

    utf_convert ("a","b","c");
    return 0;
}



