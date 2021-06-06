//
// Created by 10372 on 2021/6/4.
//

#include "offer5_replaceSpace.h"

std::string offer5_replaceSpace::replaceSpace(std::string s)
{
    if (s.empty()) return std::string();
    int space_count = 0;
    int i = s.size();
    i = i-1;
    for (auto c : s)
    {
        if(c == ' ') space_count++;
    }
    if (space_count == 0) return s;
//    s.reserve(s.size()+2*space_count);
    s.resize(s.size() + 2*space_count);
    int j = s.size()-1;
    for ( ;  i>=0 ; i--)
    {
        if (s[i] == ' ')
        {
            s[j]   = '0';
            s[j-1] = '2';
            s[j-2] = '%';
            j = j - 3;
        } else
        {
            s[j] = s[i];
            j--;
        }
    }
    return s;

}
