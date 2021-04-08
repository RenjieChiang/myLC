//
// Created by tianbot on 2021/3/22.
//

#include "LCPrimaryString2.h"
int LCPrimaryString2::reverse(int x)
{
//    if (x == INT32_MIN)
//        return 0;
//    int temp = abs(x);
//    std::vector<int> nums;
//    while ( temp != 0 )
//    {
//        nums.push_back(temp%10);
//        temp /= 10;
//    }
//    int i = 0;
//    while ( i<nums.size() )
//    {
//        temp = temp * 10 + nums[i];
//        i++;
//        if (temp > INT32_MAX/10 && i<nums.size())
//            return 0;
//    }
//    if (x<0)
//        temp *= -1;
//    return temp;

//-----------------------------------------------------------------------more efficient

    int res = 0;
    int tem = 0;
    int newRes = 0;
    while (x != 0)
    {
        tem = x % 10;
        if ( abs(res) > INT32_MAX/10 )
            return 0;
        newRes = res * 10 + tem;
        res = newRes;
        x /= 10;
    }
    return res;
}