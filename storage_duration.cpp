/*
Write a program that creates and then destroys the specified number of class objects, 
where each of the objects has the specified storage duration.

The program will accept command-line arguments of the following form:
    <storage-duration-name> <count>

<storage-duration-name> will be one of: “automatic”, “static”, “dynamic”, “thread”.
<count> will be an unsigned short integer not exceeding 100.

The program must create exactly <count> (not more, not less) objects of type anywhere, one after another,
starting from index argument value 0, and progressing up to and including <count> - 1.
The value for the storage_duration_name argument to the constructor must be the <storage-duration-name> value the program has been invoked with.
After all <count> objects are created (having the specified storage duration, very important!),
the program must then make sure that all those <count> objects are then destroyed, one after another, 
in the reverse order of construction (first the object having index <count> - 1,
then the object having index <count> - 2 and so on, ending with the object having index 0).

For example, if the command-line arguments are:
    automatic 4
then the program must produce the following output:
constructor automatic 0
constructor automatic 1
constructor automatic 2
constructor automatic 3
destructor automatic 3
destructor automatic 2
destructor automatic 1
destructor automatic 0
which must have been generated by the sequential construction and destruction of 4 automatic storage duration objects of type anywhere.
0 is a valid <count> value for the program invocation, in which case the program should not print anything.

*/

#include <iostream>
#include <thread>

class anywhere {
public:
   anywhere( std::string storage_duration_name, unsigned short index )
      : storage_duration_name_( std::move( storage_duration_name ) )
      , index_( index )
   {
      std::cout << "constructor " << storage_duration_name_ << ' ' << index_ << "\n";
   }

   ~anywhere() {
    std::cout << "destructor " << storage_duration_name_ << ' ' << index_ << " \n";

  }

private:
   const std::string storage_duration_name_;
   const unsigned short index_;

   anywhere( const anywhere & ) = delete;
   anywhere( anywhere && ) = delete;
};

void createObjects(std::string type, unsigned short count) {
  static unsigned short a = 0;
  if (count == 0) {
    return;
  }
    count = count - 1;

    if (type == std::string("automatic")) {
      anywhere obj (type, a);
      a++;
      createObjects(type, count);
    }

    if (type == std::string("dynamic")) {
      anywhere *obj = new anywhere (type, a);
      a++;
      createObjects(type, count);
      delete obj;
    }
}

int main (int argc, char * argv[]) {

  //If the number of command-line arguments is incorrect, the program should print line
  //Usage: executable-path <storage-duration-name> <count>
  //and quit.
  if (argc != 3) {
    std::cout << "Usage: executable-path <storage-duration-name> <count> \n";
    return 1;
  }

 // If the <count> is not a valid unsigned short integer, the program should print line "Invalid count" and quit.
  try {
    unsigned short count = std::stoi(argv[2]);
    // If the <count> is greater than 100, the program should print line "Too many requested" and quit.
    if (count > 100) {
      std::cout << "Too many requested \n";
      return 1;
    }
  }
  catch (...){
    std::cout << "Invalid count \n";
    return 1;
  }

  // If the <storage-duration-name> is not one of “automatic”, “static”, “dynamic”, “thread”,
  // the program should print line Invalid storage duration and quit.
    if (argv[1] != std::string("automatic")) {
      if (argv[1] != std::string("static")) {
        if (argv[1] != std::string("dynamic")) {
          if (argv[1] != std::string("thread")) {
            std::cout << "Invalid storage duration \n";
            return 1;
          }
        }
      }
    }

    unsigned short count = std::stoi(argv[2]);
    createObjects (argv[1], count);
    
    return 0;
}
