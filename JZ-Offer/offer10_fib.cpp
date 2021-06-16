//
// Created by 10372 on 2021/6/16.
//

#include "offer10_fib.h"

int offer10_fib::fib(int n)
{
//    if ( n <= 0 ) return 0;
//    if ( n == 1 ) return 1;
//    return fib(n-1) + fib(n-2);

    long a,b,c;
    long max = 1e9 + 7;
    if ( n <= 0 ) return 0;
    if ( n == 1 || n == 2) return 1;
    a = 1;
    b = 1;
    for (int i = 3; i <= n; ++i)
    {
        c = (a + b)%max;
        a = b;
        b = c;
    }
    return c;
}
