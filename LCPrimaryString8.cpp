//
// Created by tianbot on 2021/3/26.
//

#include "LCPrimaryString8.h"

std::string LCPrimaryString8::countAndSay(int n)
{
    if (n == 1)
        return "1";
    std::string temp = countAndSay(n-1);
    std::string result;
    size_t str_size = temp.size();
    size_t count = 0;
    char c_now = temp[0];
    for (int i = 0; i < str_size; ++i)
    {
        if (temp[i] == c_now)
        {
            count++;
        }
        else
        {
            result.push_back('0'+count);
            result.push_back(c_now);
            count = 0;
            c_now = temp[i];
            i--;
        }
    }
    result.push_back('0'+count);
    result.push_back(c_now);
    return result;
}
