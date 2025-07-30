/*------------------------
 Member Initializer List
 Date : 3/07/2025
--------------------------*/


#include <iostream>

/*
MEMBER INITIALIZER LIST:
To set member values into parameter, we usually use 'this' keyword
There is another method, we can use intializer lists instead of manual assignment.

Constructor without init list looks like this:
Student(std::string name, int id) {
    this->name = name;
    this->id = id;
}
(or)
Student(std::string set_name, int set_id) {
    name = set_name;
    id = set_id;
}

Given below constructor is what looks like after using init list.
*/

class Student {
private:
    std::string name;
    int id;

public:
    Student(std::string name, int id) :   //initializer lists
        name(name),
        id(id)
    {
        std::cout << "Constructor successfully called\n";
    }
    ~Student() {                          //destructor : opposite to constructor; runs during termination of program/object
        std::cout << "Exiting..!\n";
    }

    void print() {
        std::cout << name << ' '
                  << id << '\n';
    }

};

int main() {

    Student s1("Spongebob",23854);
    Student s2("Patrick",76321);
    s1.print();
    s2.print();

    return 0;
}
