#include<iostream>

class simple_class {
public:
    simple_class() {
        std::cout << "Constructor called\n";
    }
    ~simple_class() {
        std::cout << "Destructor called\n";
    }
};

class parent_class {
public:
    parent_class() {
        std::cout << "Constructor of parent class\n";
    }
    virtual ~parent_class() {                           //parent class destructor should be virtual to avoid mem. leaks
        std::cout << "Destructor of parent class\n";
    }
};

class child_class : public parent_class {
public:
    child_class() {
        std::cout << "Constructor of child class\n";
    }
    ~child_class() override {                          //if parent class destructor is virtual, then you should mention override here
        std::cout << "Destructor of child class\n";
    }

};

int main() {

    simple_class s;

    //USE OF VIRTUAL CLASS:
    //inside the parent and child class, we use virtual functions in destructors. It is because, in the below case, only the child class destructor is called and deleted.
    //the parent class destructor will not get deleted, so it will cause memory leak. We use virtual function to prevent it.
    //We use virtual functions in polymorphism as well

    parent_class* p = new child_class(); //base class pointer objects are mainly used for classes with inheritance
    delete p;


    return 0;
}
