//
// Created by 10372 on 2021/6/16.
//

#include "offer10_numWays_guagua.h"

int offer10_numWays_guagua::numWays(int n)
{
    if ( n < 0 ) return 0;
    if ( n <= 1 ) return 1;
    long a,b,c;
    long max = 1e9 + 7;
    a = 1;
    b = 1;
    for (int i = 2; i <= n; ++i)
    {
        c = (a + b)%max;
        a = b;
        b = c;
    }
    return c;

}
