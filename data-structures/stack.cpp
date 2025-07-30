#include <iostream>

class Stack {
public:
    int _size = 0;
    int* arr;
    int top = -1;

    Stack(int size) : _size(size) {
        arr = new int[_size];
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int value) {
        if(top == _size-1) {
            std::cout << "Overflow\n";
            return;
        }
        arr[++top] = value;
    }

    void pop() {

        if(top==-1) {
            std::cout << "Stack underflow!\n";
        }
        else {
            std::cout << "\n" << arr[top] << " is removed from stack.\n";
            delete &arr[top];
            top = top-1;
        }

    }

    const void display() {
        if(top==-1) {
            std::cout << "Empty stack.\n";
        }
        for(int i=top; i>=0; i--) {
            std::cout << arr[i] << '\n';
        }
    }


};


int main() {

    Stack s(4);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.display();

    s.pop();
    s.display();
    s.pop();
    s.display();
    s.pop();


    return 0;
}
