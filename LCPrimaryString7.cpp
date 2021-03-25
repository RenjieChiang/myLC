//
// Created by tianbot on 2021/3/25.
//

#include "LCPrimaryString7.h"

int LCPrimaryString7::strStr(const std::string &haystack, const std::string &needle)
{
    if (needle.empty())
        return 0;
    int i = 0;
    int j = 0;
    bool flag = false;
    int haySize = haystack.size();
    int needleSize = needle.size();
    for (; i <haySize; ++i)
    {
        if (haystack[i] == needle[j])
        {
            if (j++ < needleSize-1) continue;
            else
            {
                flag = true;
                break;
            }
        }
        if (j != 0)
            i = i - j ;
        j = 0;
    }
    return flag ? i-needleSize+1 : -1;
}
