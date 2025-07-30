/*----------------------
 Basic Array functions
 Date : 10/06/2025
------------------------*/

#include <iostream>

using std::string;

void add_values(string arr[], int num);
void display_values(string arr[], int num);
void display_address(string arr[]);
void show_element(string arr[], int index);

int main() {
    int n;
    int index;

    std::cout << "Enter the number of elements to add: ";
    std::cin >> n;
    string arr[n];

    add_values(arr,n);
    display_values(arr,n);

    std::cout << "\nLength of the array: " << n;
    display_address(arr);

    std::cout << "\nEnter index value to find the element: ";
    std::cin >> index;
    show_element(arr,index);

    return 0;
}


void add_values(string arr[], int num) {
    for(int i=0;i<num;i++) {
        std::cout << "Element " << i+1 << " : ";
        std::cin >> arr[i];
    }
    std::cout << "Array elements are successfully added!\n";
}
void display_values(string arr[], int num) {
    std::cout << "\nThe elements of the given array are:\n";
    for(int i=0;i<num;i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << "\n";
}
void display_address(string arr[]) {
    std::cout << "\nThe memory address of the array is: " << arr << "\n";
}
void show_element(string arr[], int index) {
    string element = arr[index];
    std::cout << "Element at index " << index << " is: " << element;
}
