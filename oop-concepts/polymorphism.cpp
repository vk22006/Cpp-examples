#include <iostream>

class Animal {
public:
    virtual void sound() {
        std::cout << "Animals can produce sound.\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {                            //if parent class function is virtual, then it is must to put 'override' in base class
        std::cout << "Dog goes woof-woof.\n";
    }
};

int main() {
    Animal* a = new Dog();
    //USE OF VIRTUAL FUNCTIONS IN POLYMORPHISM:
    //If functions with same name in an hierarchial class gets called, the parent method is called even after creating child class object.
    //By using virtual functions, we can override and give the child class method.
    a->sound();
    //OUTPUT:
    //Before using virtual function : Animals can produce sound.
    //After using virtual function : Dog goes woof-woof.
    delete a;

    return 0;
}
