#include "mul_integers.hpp"

int mul_integers(const std::vector<int>& nums) {
    int mul = 1;
    for (int num: nums) {
        mul *= num;
    }
    return mul;
}
