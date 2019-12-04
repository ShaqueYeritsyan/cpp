#include <iostream>

class Person {
public:
    int *id;
    int IDnum;
    std::string name;
    int birthYear;
    std::string gender;

  public:
    // Constructor
    Person(int IDnum, const std::string& N, int year, const std::string& gender1) { 
        name = N;
        birthYear = year;
        gender = gender1;
        //this-ov int IDnum, aracnc this-argument IDnum
        this->IDnum = IDnum;
        id = new int[IDnum];
        for (int i = 0; i < IDnum; ++i) {
            id[i] = i;
        }
    }
    
    Person* operator=(const Person& obj2) {
        // delete id of obj1
        delete [] this->id;
        this->id = NULL;
        
        this->IDnum = obj2.IDnum;
        // new iday obj2 IDnum
        this->id = new int[IDnum];
        
        for (int i = 0; i < IDnum; i++) {
            id[i] = obj2.id[i];
        }
        return this;
    }
        
    void print() {
        std::cout<<name<< ", " <<gender << ", " <<birthYear << ", " ;
        std::cout << "id:";
        for (int i = 0; i < IDnum; ++i) {
            std::cout << id[i];
        }
        std::cout <<"\n";
    }
    
    ~Person() {
        delete [] id;
    }
};

int main() {
    Person man(5, "Tom", 1984, "M"); 
    man.print();

    Person woman(7, "Lily", 1100, "F");
    woman.print();

    //Set the same ID
    man = woman;
    man.print();


  return 0;
}
