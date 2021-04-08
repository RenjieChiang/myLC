//
// Created by tianbot on 2021/4/5.
//

#include "LCPrimaryDynamicProgram1.h"

int LCPrimaryDynamicProgram1::climbStairs(int n)
{
//    if (n == 1) return 1;
//    if (n == 2) return 2;
//    return climbStairs(n - 1) + climbStairs(n - 2);
//超时
    if (n == 1) return 1;
    if (n == 2) return 2;
    int num[n];
    num[0] = 1;
    num[1] = 2;
    for (int i = 2; i < n; ++i)
    {
        num[i] = num[i-1] + num[i-2];
    }
    return num[n-1];
}
