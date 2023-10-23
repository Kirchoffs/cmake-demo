#include "mul_integers.hpp"
#include <iostream>

int main() {
    auto nums = {1, 2, 3, 4, 5};
    int result = 120;

    if (mul_integers(nums) == result) {
        std::cout << "Test passed" << std::endl;
        return 0;
    } else {
        std::cout << "The expected result is " << result << std::endl;
        std::cout << "The actual result is " << mul_integers(nums) << std::endl;
        return -1;
    }
}
