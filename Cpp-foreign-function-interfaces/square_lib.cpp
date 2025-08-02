//extern "C" disables name mangling so that python can find the function easily
//here will not compile the file into executable file, instead we compile it to create .dll file
//for seamless integration. No need of main function for creating .dll files

extern "C" int square(int x) {
    return x * x;
}
