//
// Created by 10372 on 2021/6/29.
//

#include "offer15_hammingWeight.h"

int offer15_hammingWeight::hammingWeight(unsigned int n)
{
    int count = 0;
    while (n)
    {
        if ( /*n%2*/ n&1)
        {
            count++;
            n = n>>1;
        } else
        {
            n = n>>1;
        }

    }
    return count;
    //优化，不进行取余计算，而是与 1 进行与运算
}
