#include <iostream>
#include <map>             //Arranges itself in ascending order based on key value (alphabetical order if key is string)
#include <unordered_map>   //Does not arrange itself in order; order will be based on first value inserted
#include <string>

using std::map;
using std::unordered_map;
using std::string;
using std::pair;

int main() {
    map<string, string> myDictionary;

    myDictionary.insert(pair<string, string>("Hello", "Vanakkam"));
    myDictionary.insert(pair<string, string>("Fruit", "Pazham"));
    myDictionary.insert(pair<string, string>("Cat" , "Poonai"));
    myDictionary.insert(pair<string, string>("Idiot", "Muttal"));

    std::cout << "Using map: \n";

    for(auto pair : myDictionary) {
        std::cout << pair.first << " - " << pair.second << "\n";
    }

    unordered_map<string, string> _myDictionary;

    _myDictionary.insert(pair<string, string>("Hello", "Vanakkam"));
    _myDictionary.insert(pair<string, string>("Fruit", "Pazham"));
    _myDictionary.insert(pair<string, string>("Cat" , "Poonai"));
    _myDictionary.insert(pair<string, string>("Idiot", "Muttal"));

    std::cout << "Using unordered map: \n";

    for(auto pair : _myDictionary) {
        std::cout << pair.first << " - " << pair.second << "\n";
    }


    return 0;
}
