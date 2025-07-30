/*----------------------------------------------------------
 Simple Object-Oriented Programming using Class and Object
 Date : 29/06/2025
------------------------------------------------------------*/

#include <iostream>

typedef std::string text;
using std::cout;

class Human {
    public:
       text name;
       text occupation;
       int age;

       void eat(text name) {
           cout << name << " is eating.";
       }
       void job(text name, text occupation) {
           cout << name << " is working as " << occupation;
       }

};
int main() {

    Human human1;    //Object declaration
    human1.name = "John";
    human1.occupation = "Engineer";
    human1.age = 28;

    human1.eat(human1.name);
    human1.job(human1.name, human1.occupation);

    return 0;
}
