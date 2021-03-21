#include <iostream>
#include "LCPrimaryArray5.h"

int main() {
    LCPrimaryArray5 mySolution;
    std::vector<int> nums = {1, 1, 2, 2, 6, 7, 7};
    std::cout << mySolution.singleNumber(nums);
    return 0;
}
