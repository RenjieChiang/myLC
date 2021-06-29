//
// Created by 10372 on 2021/6/29.
//

#include "offer16_myPow.h"
double PowerWithUnsignedInt(double x, int n)
{
    if ( n == 0 ) return 1;
    if ( n == 1 ) return x;
    double result = PowerWithUnsignedInt(x, n >> 1);
    result *= result;
    if ( (n & 1) == 1)
        result *= x;
    return result;
}
double offer16_myPow::myPow(double x, int n)
{
//    double result;
//    if ( n >= 1 )
//    {
//        result = 1;
//        for (int i = 0; i < n; ++i)
//        {
//            result *= x;
//        }
//        return result;
//    }
//    else if ( n == 0 )
//    {
//        if ( -1e-6 < x < 1e-6 ) return 0;
//        else return 1;
//    }
//    else
//    {
//        if ( -1e-6 < x < 1e-6 ) return 0;
//        result = 1;
//        x = 1./x;
//        for (int i = 0; i < -n; ++i)
//        {
//            result *= x;
//        }
//        return result;
//    }

//更快的方法

    if ( n >= 1 )
    {
        return PowerWithUnsignedInt(x,n);
    }
    else if ( n == 0 )
    {
        if ( -1e-6 < x < 1e-6 ) return 0;
        else return 1;
    }
    else
    {
        if ( -1e-6 < x < 1e-6 ) return 0;
        return  1/PowerWithUnsignedInt(x,-n);
    }

}


