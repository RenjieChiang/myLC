//
// Created by tianbot on 2021/4/8.
//

#include "LCPrimaryDQ1.h"
#include "cmath"
LCPrimaryDQ1::LCPrimaryDQ1(std::vector<int> &nums)
{
//    std::copy(nums.begin(), nums.end(), nums_.begin());
//这里num_未初始化还不能用copy?
/*
 * 如果要复制给一个vector，用resize申请空间
copy接受三个迭代器，第一个和第二个为要复制的区间[first,last)。第三个迭代器为目标的起始位置，要求目标已有足够的空间。即不能是空的vector（size==0）。
 */
    nums_ = nums;
}

std::vector<int> LCPrimaryDQ1::reset()
{
    return nums_;
}

std::vector<int> LCPrimaryDQ1::shuffle()
{
    std::vector<int> temp = nums_;
    for (int i = temp.size()-1; i >= 0; i--)
    {
        std::swap(temp[i], temp[rand()%(i+1)]);
    }
    return temp;
}
