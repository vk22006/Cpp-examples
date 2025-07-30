#include <iostream>
#include <string>
#include <fstream> //used for file handling


/*FILE MODES:
ios::in = read-mode
ios::out = write-mode
ios::app = append-mode

*/

int main() {
    std::fstream myFile;  //file pointer declaration

    //1. Write file
    myFile.open("test.txt", std::ios::out); //creates new file if file didn't exist
    if(myFile.is_open()) {
        myFile << "Hello world!\n";
        myFile << "This is a test.\n";
        myFile.close();
    }

    //2. Add data in file
    myFile.open("test.txt", std::ios::app); //append mode
    if(myFile.is_open()) {
        myFile << "Added a new line\n";
        myFile.close();
    }

    //3. Read file
    myFile.open("test.txt", std::ios::in);
    if(myFile.is_open()) {
        std::string line;
        while(getline(myFile,line)) {  //stores a line from file to 'line' variable in each loop
            std::cout << line << std::endl;
        }
        myFile.close();
    }

    return 0;

}
