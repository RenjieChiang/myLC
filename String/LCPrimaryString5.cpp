//
// Created by tianbot on 2021/3/23.
//

#include "LCPrimaryString5.h"
bool LCPrimaryString5::isPalindrome(const std::string &s)
{
    if (s.empty())
        return true;
    std::vector<char> temp;
    for (auto c : s)
    {
        if((c <= 'z' && c >= 'a') || (c <= '9' && c >= '0'))
            temp.push_back(c);
        else if ((c <= 'Z' && c >= 'A'))
            temp.push_back(c-('A'-'a'));
    }
    int i = 0;
    int j = temp.size() - 1;
    while (j > i)
    {
        if (temp[i] == temp[j])
        {
            i++;
            j--;
        } else
            return false;
    }
    return true;
}