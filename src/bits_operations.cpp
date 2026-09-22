#include <iostream>
int main(int, char**) {

    char a = 0B01010101;
    char b = 0B10101010;

    char c = a | b;

    std::cout << "result: " <<  int(c) << std::endl;


    char mask = 0B00000001;
    char a2 = 2;
    char b2 = 3;

    std::cout << "result: " <<  bool(a2 & mask) << std::endl;

    std::cout << "result: " <<  bool(b2 & mask) << std::endl;


    int a3 = 2 * 2;

    int a4 = 2 << 1;

    std::cout << "result: a3 = " <<  a3 << ", a4 = " << a4 << std::endl;

}