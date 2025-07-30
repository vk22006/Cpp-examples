#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

/*
In the given program, without mutex the program will show as if two people drive the car at the same time.
This is not possible. So, we use mutex here.
Mutex allows us to lock a process for a single thread and unlocks when that thread finishes the process,
passing it to the next thread.
*/

std::mutex carMutex;

void driveCar(std::string driverName) {
    std::lock_guard<std::mutex> carLock(carMutex);        //locks and unlocks after end of thread process automatically
    std::cout << driverName << " has started driving\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << driverName << " has finished driving\n";
}

int main() {

    std::thread thread1(driveCar, "Max");
    std::thread thread2(driveCar, "Smith");

    thread1.join();
    thread2.join();

    return 0;
}