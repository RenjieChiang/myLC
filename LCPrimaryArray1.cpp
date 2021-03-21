//
// Created by tianbot on 2021/3/19.
//

#include "LCPrimaryArray1.h"
#include "algorithm"

using std::vector;

//int LCPrimaryArray1::removeDuplicates(vector<int> &nums) {
//    //second
//    //双指针，一个记录搜索位置，一个记录存放位置
//    int i, j = 1;
//    for (i = 1; i < nums.size(); ++i) {
//        if (nums[i] == nums[i - 1]) continue;//判断条件
//        else {
//            nums[j] = nums[i];
//            j++;
//        }
//    }
//    return j;
//}

//try stl
int LCPrimaryArray1::removeDuplicates(std::vector<int> &nums)
{
    auto begin_iter = std::unique(nums.begin(), nums.end());
    nums.erase(begin_iter, nums.end());
    return nums.size();
}


    //first
//    int i, j, len;
//    j = 0;
//    len = 1;
//    if (nums.size() <= 1)
//        return nums.size();
//    for (i = 1; i < nums.size(); ++i)
//    {
//        if (nums[i] != nums[j])
//        {
//            j = i;
//            len ++;
//        }
//        else nums[i] = INT32_MAX;
//    }
//    for (i = 0, j = 0; i < nums.size(); ++i)
//    {
//        if (nums[i] != INT32_MAX)
//        {
//            nums[j] = nums[i];
//            j++;
//        }
//    }
//    return len;
//}
