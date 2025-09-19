#include <iostream>
#include <cmath>

namespace crypto {
    long long binaryEuclida(const long long numberFirst, const long long numberSecond) {
        if (numberFirst == 0) {
            return numberSecond;
        }

        if (numberSecond == 0) {
            return numberFirst;
        }

        if (numberFirst == 1 || numberSecond == 1) {
            return 1;
        }

        if (numberFirst == numberSecond) {
            return numberFirst;
        }

        if ((numberFirst % 2 == 0) && (numberSecond % 2 != 0)) {
            return binaryEuclida(numberFirst / 2, numberSecond);
        }

        if ((numberFirst % 2 != 0) && (numberSecond % 2 == 0)) {
            return binaryEuclida(numberFirst, numberSecond / 2);
        }

        if ((numberFirst % 2 == 0) && (numberSecond % 2 == 0)) {
            return 2 * binaryEuclida(numberFirst / 2, numberSecond / 2);
        }

        if ((numberFirst % 2 != 0) && (numberSecond % 2 != 0) && (numberFirst > numberSecond)) {
            return binaryEuclida(std::abs(numberFirst - numberSecond) / 2, numberSecond);
        }

        if ((numberFirst % 2 != 0) && (numberSecond % 2 != 0) && (numberFirst < numberSecond)) {
            return binaryEuclida(std::abs(numberSecond - numberFirst) / 2, numberFirst);
        }

        return 1;
    }
}