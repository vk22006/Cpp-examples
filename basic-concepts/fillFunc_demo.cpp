/*----------------------------------
 Demonstration of fill() in arrays
 Date : 12/06/2025
------------------------------------*/

#include <iostream>

int main() {

    const int SIZE = 99;
    std::string foods[SIZE];

    //Syntax : fill(begin,end,value)
    //Ex: fill(foods, foods+SIZE, "text") will fill the entire array with "text"

    fill(foods, foods + (SIZE/3), "Pizza");   // Fills one third of the array with "pizza"
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "Noodles");  //Fills the second portion with "Noodles"
    fill(foods + (SIZE/3)*2, foods + SIZE, "Pasta"); //Fills the remaining portion with "Pasta"

    for(std::string food : foods) {
        std::cout << food << '\n';
    }

    return 0;
}
