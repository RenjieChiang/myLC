//
// Created by tianbot on 2021/4/11.
//

#include "LCPrimarySM4.h"


int LCPrimarySM4::romanToInt(const std::string& s)
{
    int d_max = 1;//当前最大档位
    int k;
    int result = 0;
    for (auto iter = s.end()-1; iter != s.begin(); iter--)
    {
        k = romanNumber(*iter);
        if (k < d_max) result -= k;
        else
        {
            result += k;
            d_max = k;
        }
    }
    k = romanNumber(s.front());
    if (k < d_max) result -= k;
    else
    {
        result += k;
        d_max = k;
    }
    return result;
}

int LCPrimarySM4::romanNumber(const char c)
{
    switch (c)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:;
    }
    return 0;
}
