#include <iostream>
int main(int argc, char**) {

    // так его можно задать только в COMPILE TIME!!!
    //char simple_char_array[10] {17,65,33,9, 4,5,6,7,8,9};
    char simple_char_array[] {17,65,33,9, 4,5,6,7,8,9};

    char * poiner {simple_char_array}; // как видим, массив - это указатель

    char * pointer_on3 {poiner + 3};

    char * pointer_on6 {&simple_char_array[5]};

    char * pointer_on7 {simple_char_array + 6};

    //int * pointer_on_int {(int *) simple_char_array};
    int * pointer_on_int {reinterpret_cast<int *>(simple_char_array)};

    int value = *pointer_on_int; //153174289 потому что первые 4 байта 17,65,33,9,
    //и мы прочитали их как 4ехбайтное число

    for (int i = 0; i < 10; ++i) {
        std::cout << simple_char_array[i] << std::endl;
    }

    for (int i = 0; i < 10; ++i) {
        std::cout << simple_char_array + i << std::endl;
    }

    for (auto item : simple_char_array) {
        std::cout << item << std::endl;
    }

    for (auto& item : simple_char_array) {
        std::cout << item << std::endl;
    }

    for (auto& x : simple_char_array) { // add 1 to each x in v
        ++x;
    }

    char * runtime_allocated_array = new char[argc];
    delete [] runtime_allocated_array;
}