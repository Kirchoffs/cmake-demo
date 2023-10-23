#include "sum_integers.hpp"

int sum_integers(const std::vector<int>& nums) {
    int sum = 0;
    for (int num: nums) {
        sum += num;
    }
    return sum;
}
