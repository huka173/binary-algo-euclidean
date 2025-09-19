#include <iostream>
#include "crypto.h"
#include "io.h"
#include <chrono>

void performanceTest() {
    std::cout << "\n=== Performance Test ===\n";

    auto start = std::chrono::high_resolution_clock::now();

    volatile long long result;

    for (int i = 0; i < 100000; i++) {
        result = crypto::binaryEuclida(123456789, 987654321 + i % 100);
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout << "100,000 iterations took: " << duration.count() << " ms\n";
    std::cout << "Last result: " << result << "\n";
}

int main() {
    std::cout << "Binary algorithm Euclidean\n";

    performanceTest();

    long long numFirst = inputNumber();
    long long numSecond = inputNumber();
    std::cout << "NOD(" << numFirst << ", " << numSecond << "): " << crypto::binaryEuclida(numFirst, numSecond) << std::endl;
    
    char ch;
    std::cin >> ch;
}