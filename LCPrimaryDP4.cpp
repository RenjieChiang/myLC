//
// Created by 10372 on 2021/4/6.
//

#include "LCPrimaryDP4.h"

int LCPrimaryDP4::rob(std::vector<int> &nums)
{
    if (nums.size() == 1) return nums[0];
    if (nums.size() == 2) return std::max(nums[0], nums[1]);
    int dp[nums.size()];
    dp[0] = nums[0];
    dp[1] = std::max(nums[0], nums[1]);
    for (int i = 2; i < nums.size(); ++i)
    {
        dp[i] = std::max(dp[i-1], dp[i-2]+nums[i]);
    }
    return std::max(dp[nums.size()-1], dp[nums.size()-2]);

}
