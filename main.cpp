#include <iostream>
#include "LCPrimaryArray9.h"

int main() {
    LCPrimaryArray9 mySolution;
    std::vector<int> nums = {3,2,4};
    std::vector<int> result;
    result = mySolution.twoSum(nums,6);
    for (auto x:result)
        std::cout << x << "  ";
    return 0;
}
