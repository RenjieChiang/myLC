//
// Created by tianbot on 2021/3/21.
//

#include "LCPrimaryArray8.h"
void LCPrimaryArray8::moveZeroes(std::vector<int> &nums)
{
//    auto end_iter = nums.end();
//    auto iter = nums.begin();
//    while (iter != end_iter-1)
//    {
//        if (*iter == 0)
//        {
//            nums.erase(iter);
//            nums.push_back(0);
//            continue;
////            if (iter == end_iter - 1)
////                break;
////            else
////                continue;
//        }
//        iter++;
//    }
//    for (auto &x : nums)
//        std::cout << x << "   ";

//----------------------------------
//双指针
    int i = 0;
    int size = nums.size();
    for (int j = 0; j < size; ++j)
    {
        if (nums[j] != 0)
        {
            std::swap(nums[i], nums[j]);
        }
        if (nums[i] != 0)
            i++;
    }
    for (auto &x : nums)
        std::cout << x << "   ";
}