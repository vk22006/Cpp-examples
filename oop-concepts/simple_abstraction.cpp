/*--------------------------
 Simple Abstraction in OOP
 Date : 29/06/2025
----------------------------*/

#include <iostream>

/*
ABSTRACTION:
- Used to hide data from the user
- Using 'private' keyword
- The only way access private data is by using getters and setters.
*/

class Stove {
    private:
        int temperature = 0;

    public:
        int getTemp() {                    // getter : used to read private variable
            return temperature;
        }
        void setTemp(int temperature) {    // setter : used to write/modify private variable
            if(temperature < 0) {
                this->temperature = 0;
            }
            else if(temperature >= 10) {
                this->temperature = 10;
            }
            else {
                this->temperature = temperature;
            }
        }

};


int main() {

    Stove s1;
    Stove s2;

    s1.setTemp(7);
    std::cout << "Temperature = " << s1.getTemp() << "\n";
    s2.setTemp(20);
    std::cout << "Temperature = " << s2.getTemp() << "\n";


    return 0;
}
