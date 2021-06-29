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
    //缺点， 若要求输入 int 而不是unsigned，就会可能出现死循环，因为输入负数后右移出现问题

    /*
     * unsigned flag = 1;
     * 通过右移flag 进行与运算，从而得到每个位的结果
     * while(flag)
     * {
     *      if( n & flag ) count++;
     *      flag = flag << 1;
     * }
     */
}
