//
// Created by 10372 on 2021/6/17.
//

#include "offer14_cutingRope.h"
#include "iostream"
#include "math.h"
int offer14_cutingRope::cuttingRope(int n)
{
//    //方法1，动态规划
//    if (n<2) return 0;
//    if (n==2)return 1;
//    if (n==3)return 2;
//    int mem[n+1];
//    mem[0] = 0;//n=0
//    mem[1] = 1;//n=1
//    mem[2] = 2;//n=2
//    mem[3] = 3;
//    int max = 0;
//    int mem_temp=0;
//    for (int i = 4; i <= n; ++i)
//    {
//        max = 0;
//        for (int j = 1; j <= i/2; ++j)
//        {
//            mem_temp = mem[j] * mem[i-j];
//            if (max < mem_temp)
//                max = mem_temp;
//        }
//        mem[i] = max;
//    }
//    return mem[n];

    //方法2，贪婪算法
    if (n<2) return 0;
    if (n==2)return 1;
    if (n==3)return 2;
    if (n==4)return 4;
    int a = n/3;
    int b = n%3;
    if (b == 1)
        return pow(3,a-1)*4;
    else if (b == 0)
        return pow(3,a);
    else return pow(3,a)*2;
}
