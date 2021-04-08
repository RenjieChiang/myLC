//
// Created by tianbot on 2021/3/23.
//

#include "LCPrimaryString4.h"
bool LCPrimaryString4::isAnagram(const std::string& s, const std::string& t)
{
    std::unordered_map<char, int> myHash;
    for (auto c : s)
        myHash[c]++;
    for (auto c : t)
        myHash[c]--;
    for (auto c : myHash)
    {
        if (c.second != 0)
            return false;
    }
    return true;
}