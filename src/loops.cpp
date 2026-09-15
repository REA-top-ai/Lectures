#include <iostream>
#include <vector>
int main(int, char** ) {

    std::cout << "\n\n Example 1 \n\n" << std::endl;
    for (int i = 1; i <= 5; ++i) {
        std::cout << "iteration # " << i << std::endl;
    }

    std::cout << "\n\n Example 2 \n\n" << std::endl;
    for (int i = 1; i <= 5; ++i) {
        std::cout << "iteration # " << i << std::endl;
        if (i > 2) break;
    }

    std::cout << "\n\n Example 3 \n\n" << std::endl;
    for (int i = 1; i <= 5; ++i) {
        std::cout << "iteration # " << i << std::endl;
        if (i > 2) continue;
        std::cout << "subiteration # " << i << std::endl;
    }

    std::cout << "\n\n Example 4 - While \n\n" << std::endl;
    int number = 0;
    std::cout << "input number greater then 10: ";
    while (number <= 10) {
        std::cin >> number;
        if (number <= 10) {
            std::cout << "Wrong! Try again!\ninput number greater then 10: ";
        }
    }

    std::cout << "\n\n Example 5 - Do-While \n\n" << std::endl;
    int choice;
    do {
        std::cout << "1. Start\n2. Options\n0. Exit\n";
        std::cout << "your choice: ";
        std::cin >> choice;
    } while (choice != 0);

    std::cout << "\n\n Example 6 - range based for \n\n" << std::endl;
    std::vector<int> numbers = {10, 20, 30, 40, 50};
    for (int num : numbers) {
        std::cout << num << " ";
    }
    for (auto& num : numbers) {
        num *= 2; // Умножаем каждый элемент на 2
    }
    std::cout << "\n" << std::endl;
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}