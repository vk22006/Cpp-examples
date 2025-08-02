# How to Compile a multiple file program

Usually you will receive an undefined reference if you try to run a program from main.cpp just like the one you see in this folder.
This is because the class file (Date.cpp in this example) is not compiled together.

In such cases, you have to compile and run manually. Here's how:

1. `g++ main.cpp classFile.cpp -o program.exe` will compile both file and create .exe file named `program.exe`

2. `./program.exe` will run the program which is compiled
