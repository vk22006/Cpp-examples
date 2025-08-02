# How to compile files for FFI

In this case, we use Python as a frontend and C++ as a backend. We use the ctypes library in Python, which gathers information from the .dll file and executes the method in Python.
To do this, follow these steps:

1. Write your C++ code and compile it to create a .dll (Dynamic Link Library); in this case, no need for main()
2. Use this command: `g++ -shared -o file.dll file.cpp`
3. Use the .dll file in python and run the file from python `python file.py` or `python3 file.py`
