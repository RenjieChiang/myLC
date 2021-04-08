//
// Created by tianbot on 2021/4/6.
//

#include "LCPrimaryDP3.h"
#include "iostream"
int LCPrimaryDP3::maxSubArray(std::vector<int> &nums)
{
    //brutal
//    if (nums.size() == 1) return nums[0];
//    int max_sub = INT32_MIN;
//    int sum = 0;
//    for (int i = 1; i < nums.size()+1; ++i)
//    {
//        for (int j = 0; j < i; ++j)
//        {
//            sum += nums[j];
//        }
//        max_sub = std::max(sum, max_sub);
//        for (int j = i; j < nums.size(); ++j)
//        {
//            sum += nums[j] - nums[j-i];
//            max_sub = std::max(sum, max_sub);
//        }
//        sum = 0;
//    }
//    return max_sub;
    //最后一个测试例超时

    //Dynamic Programming
    //问题转化为 求以 nums[i] 为结尾的子串最大和 dp(i) 的最大值
    int dp[nums.size()];
    int max_sub = nums[0];
    dp[0] = nums[0];
    for (int i = 1; i < nums.size(); ++i)
    {
        if (dp[i-1] <= 0) dp[i] = nums[i];
        else dp[i] = dp[i-1] + nums[i];
        max_sub = std::max(max_sub, dp[i]);
    }
    return max_sub;
}
