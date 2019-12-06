#include <iostream>

class Person {
private:
    int *id;
    int IDnum;
    std::string name;
    int birthYear;
    std::string gender;

  public:
    // Constructor
    Person(int IDnum_, const std::string& N_, int year_, const std::string& gender1_) 
    : id(new int[IDnum_])
    , IDnum(IDnum_)
    , name(N_)
    , birthYear(year_) 
    , gender(gender1_) { 
        //this-ov int IDnum, aracnc this-argument IDnum
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

    /* Copy constructor */
    //https://www.javatpoint.com/cpp-copy-constructor
    Person (const Person& obj2)
    {
        name = obj2.name;
    }
        
    void print() {
        std::cout<<name<< ", " <<gender << ", " <<birthYear << ", " ;
        std::cout << "id:";
        for (int i = 0; i < IDnum; ++i) {
            std::cout << id[i];
        }
        std::cout <<"\n";
    }

    //move constructor 
    Person (const Person&& obj2) : birthYear(std::move(obj2.birthYear))
    {
    }
    
    ~Person() {
        delete [] id;
    }
};

class student : public Person {


};

int main() {

    student Ashot;



    // operator=
    Person man(5, "Tom", 1984, "M"); 
    man.print();

    Person woman(7, "Lily", 1100, "F");
    woman.print();

    //Set the same ID
    man = woman;
    man.print();

    //Copy constructor
    Person child1(2, "Baby1", 2016, "M");
    Person child2(child1);
    child2.print();

    //move constructor
    Person child3(std::move(child1));
    child3.print();



  return 0;
}
