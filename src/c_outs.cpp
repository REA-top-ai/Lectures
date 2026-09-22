#include <iostream>
#include <stdio.h>

// run wiht: .\build\Debug\c_outs.exe > out.log 2> err.log
//   on mac: ./build/c_outs > out.log 2> err.log
int main(int, char**) {

    std::cout << "this is goes to stdout" << std::endl;
    std::cerr << "this is goes to stderr" << std::endl;

    printf("this is goes to stdout too %c\n", char {'!'});
    perror("this is goes to stderr too");
}