//
// Created by tianbot on 2021/3/19.
//

#include "LCPrimaryArray5.h"
int LCPrimaryArray5::singleNumber(std::vector<int> &nums)
{
//    int sum = 0;
//    for (int i = 0; i < nums.size(); ++i)
//    {
//        sum = sum ^ nums[i];
//    }
//    return sum;
//
//
//--------------------------------------------------
    std::set<int> mySet;
    for (auto x : nums)
    {
        if (!mySet.insert(x).second)
            mySet.erase(x);
    }
    return *mySet.begin();

}