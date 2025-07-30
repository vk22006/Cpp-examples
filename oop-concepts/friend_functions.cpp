#include <iostream>

class Employee {
private:
    int salary;

public:
    Employee(int s) {
        salary = s;
    }
    friend void display_sal(Employee emp); //function declaration

};

//FRIEND FUNCTIONS:
//Used for external functions to access private members inside a class

void display_sal(Employee emp) {           //function definition
    std::cout << emp.salary << '\n';
}

int main() {
    Employee _emp(20000);
    display_sal(_emp);

    return 0;
}


