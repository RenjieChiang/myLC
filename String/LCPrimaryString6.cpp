//
// Created by tianbot on 2021/3/25.
//

#include "LCPrimaryString6.h"
int LCPrimaryString6::myAtoi(const std::string &s)
{
    int i = 0;
    bool minus_flag = false;
    int size = s.size();
    while (s[i] == ' ' && i < size)
        i++;
    if (i == size)
        return 0;
    if (s[i] == '+')
    {
        i++;
    }
    else if (s[i] == '-')
    {
        minus_flag = true;
        i++;
    }
    long int result = 0;
    if (s[i] > '9' || s[i] < '0' )
        return 0;
    while (i < size)
    {
        if (s[i] > '9' || s[i] < '0' )
            break;
        result = result * 10 + (s[i] - '0');
        i++;
        if (result  > INT32_MAX )
            return minus_flag? INT32_MIN : INT32_MAX;
    }
    return minus_flag? result*-1 : result;
}