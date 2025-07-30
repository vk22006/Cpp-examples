#include <iostream>
#include <chrono>
#include <ctime>


int main() {

    //Storing current date and time
    //USING CHRONO

    auto now = std::chrono::system_clock::now();
    std::time_t current = std::chrono::system_clock::to_time_t(now);

    std::cout << "Current date and time:\n" << std::ctime(&current);

    //USING ONLY CTIME (without chrono)

    std::time_t now2 = std::time(nullptr);
    const char* dt = std::ctime(&now2);
    std::cout << "Current date and time:\n" << dt;

    return 0;
}
