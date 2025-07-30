#include <iostream>

int main() {

    std::string name = "Abcdef";
    double percentage = 87.5;
    bool b = true;
    std::string s[] = {"Spongebob","Patrick","Squidward","Sandy","Krabs"};

    std::cout << sizeof(name) << " bytes.\n";
    std::cout << sizeof(percentage) << " bytes.\n";
    std::cout << sizeof(b) << " bytes.\n";

    std::cout << sizeof(s)/sizeof(s[0]) << " elements.\n";

    return 0;
}
