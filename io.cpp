#include <iostream>

long long inputNumber() {
    for (;;) {
        std::cout << "Please enter a positive number: ";
        long long num{};
        std::cin >> num;

        if (std::cin.fail() || num < 0) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Error, please enter correctly a positive number!\n";
            continue;
        }
        std::cin.ignore(32767, '\n');
        return num;
    }
}