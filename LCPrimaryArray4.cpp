//
// Created by tianbot on 2021/3/19.
//

#include "LCPrimaryArray4.h"
#include "algorithm"
bool LCPrimaryArray4::containsDuplicate(std::vector<int> &nums)
{
    std::sort(nums.begin(), nums.end()); // NlogN 的速度
    for (int i = 1; i < nums.size(); ++i)
    {
        if (nums[i] == nums[i-1])
            return true;
    }
    return false;

//尝试set方法
//    std::set<int> mySet;//set 对元素排序且互不相等
//    for (auto num : nums)
//        mySet.insert(num);
//    if (mySet.size() < nums.size())
//        return true;
//    return false;

    std::unordered_set<int> mySet;
    for (auto num : nums)
        mySet.insert(num);
    if (mySet.size() < nums.size())
        return true;
    return false;
}