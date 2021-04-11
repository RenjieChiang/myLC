//
// Created by tianbot on 2021/4/11.
//

#include "LCPrimarySM3.h"
#include "cmath"
bool LCPrimarySM3::isPowerOfThree(int n)
{
    // method 1
    if(n <= 0) return false;
    if(n == 1) return true;
//    while (n != 3)
//    {
//        if( n % 3 != 0 ) return false;
//        n = n/3;
//    }
//    return true;

    // method 2
    int max_three = std::pow(3, 19); //int 类型下最大的 3 的幂
    if(max_three % n == 0)return true;
    return false;
}
