#include <iostream>
#include "LCPrimaryArray11.h"

int main() {
    LCPrimaryArray11 mySolution;
    std::vector<std::vector<int>> nums = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    mySolution.rotate(nums);
    return 0;
}
