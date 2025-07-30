#include <iostream>
#include <iomanip>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main() {

    json jOut;
    std::fstream myJson;

    //= Writing in JSON ==============================

    jOut["name"]   = "John doe";
    jOut["age"]    = 30;
    jOut["dept"]   = {"Finance", "Lead Accountant"};
    jOut["salary"] = 55000;

    std::ofstream outFile("employee.json");
    if(outFile.is_open()) {
        outFile << std::setw(4) << jOut << '\n';
        outFile.close();
    }

    //= Reading in JSON =============================

    std::ifstream inFile("employee.json");
    json jIn;
    inFile >> jIn;
    inFile.close();

    std::cout << "Name        : " << jIn["name"]     << "\n";
    std::cout << "Age         : " << jIn["age"]      << "\n";
    std::cout << "Salary      : " << jIn["salary"]   << "\n";
    std::cout << "Department  : ";
    for (auto& tag : jIn["dept"]) {
        std::cout << tag << " ";
    }
    std::cout << "\n";

    return 0;

}
