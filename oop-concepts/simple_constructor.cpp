/*----------------------------------------------------------
 Implementation of Constructors
 Date : 29/06/2025
------------------------------------------------------------*/

#include <iostream>

typedef std::string text;

class Human {
    public:
       text name;
       text occupation;
       int age;

       void play(text name) {
           std::cout << name << " is playing.\n";
       }
       void job(text name, text occupation) {
           std::cout << name << " is working as " << occupation << "\n";
       }
    Human(text name, text occupation, int age) {               //constructor method
        this->name = name;
        this->occupation = occupation;
        this->age = age;
    }

};
int main() {

    Human human1("John","Engineer",28);    // Object declaration
    Human human2("Anna","Scientist",24);   // Another object

    human1.play(human1.name);
    human1.job(human1.name, human1.occupation);
    human2.play(human2.name);
    human2.job(human2.name, human2.occupation);

    return 0;
}

