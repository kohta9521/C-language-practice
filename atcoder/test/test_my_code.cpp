#include <iostream>
#include "my_code.h"

// シンプルなアサート関数
void assertEqual(int expected, int actual, const std::string& testName) {
    if (expected == actual) {
        std::cout << testName << " passed." << std::endl;
    } else {
        std::cerr << testName << " failed: expected " << expected << " but got " << actual << std::endl;
    }
}

int main() {
    // テストケース
    assertEqual(3, add(1, 2), "Test 1: add(1, 2)");
    assertEqual(0, add(-1, 1), "Test 2: add(-1, 1)");
    assertEqual(-2, add(-1, -1), "Test 3: add(-1, -1)");

    return 0;
}