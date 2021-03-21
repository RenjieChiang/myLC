//
// Created by tianbot on 2021/3/19.
//

#include "LCPrimaryArray3.h"
#include "iostream"
void LCPrimaryArray3::rotate(std::vector<int> &nums, int k)
{
//    k = k % nums.size();
//    auto iter = nums.end() - k ;
//    nums.insert(nums.begin(), iter, nums.end());
//    nums.erase(nums.end()-k, nums.end());

//leetcode莫名有测试案例通不过
//其实没有达成就地
    int temp;
    for (int i = 0; i < k; ++i)
    {
        temp = nums.back();
        nums.pop_back();
        nums.insert(nums.begin(), temp);//insert速度较慢
    }


}