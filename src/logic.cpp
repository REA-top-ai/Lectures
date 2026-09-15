#include <iostream>

int main (int, char**) {

    int speed = 85;

    if (speed < 60) {
        std::cout << "low speed" << std::endl;
    } else if (speed <= 90) {
        std::cout << "optimal speed" << std::endl;
    } else {
        std::cout << "speed is over the limit!" << std::endl;
    }

    int choice = 2;
    switch (choice) {
        case 1:
            std::cout << "chioce was: Create" << std::endl;
            break;
        case 2:
            std::cout << "chioce was: Open" << std::endl;
            break;
        default:
            std::cout << "chioce was: Unknown" << std::endl;
    }

    int a = 10, b = 20;
    int max_val = (a > b) ? a : b;
    std::cout << "Max: " << max_val << std::endl;

    return 0;
}