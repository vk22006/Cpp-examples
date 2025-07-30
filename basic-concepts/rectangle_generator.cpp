#include <iostream>

int main() {
    using std::cin;
    using std::cout;

    int i,j;
    int length, breadth;
    int area;
    char symbol;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    cout << "Enter a symbol to use: ";
    cin >> symbol;
    cout << "\n\t";

    for(i=1; i<=length; i++) {
        for(j=1; j<=breadth; j++) {
            cout << symbol << ' ';
        }
        cout << "\n\t";
    }

    if(length==breadth) {
        cout << "\nIt is a square!" << std::endl;

        area = length*length;
        cout << "Area of the square is: " << area << std::endl;
    }
    else {
        area = length*breadth;
        cout << "\nArea of given rectangle is: " << area << std::endl;
    }

    return 0;
}
