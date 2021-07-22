//
// Created by 10372 on 2021/7/22.
//

#include "offer21_exchange.h"

std::vector<int> offer21_exchange::exchange(std::vector<int> &nums)
{
    if (nums.empty())return nums;
    if (nums.size() == 1) return nums;
    int i = 0;
    int j = nums.size();
    while ( i < j )
    {
        while ( nums[i] % 2 && i < j && i<=nums.size()) i++;
        while ( (! nums[j] % 2) && i < j && j>=0) j--;
        std::swap(nums[i], nums[j]);
    }
    return nums;
}
