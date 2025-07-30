#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    std::srand(std::time(nullptr));
    int num = (std::rand()%6) + 1;
    std::cout << num;

    return 0;
}
