//
// Created by tianbot on 2021/3/23.
//

#include "LCPrimaryString3.h"
int LCPrimaryString3::firstUniqChar( const std::string &s)
{
//    std::unordered_map<char, int> myHash;
//    for (auto c : s)
//    {
//        myHash[c]++;
//    }
//    int min = INT32_MAX;
//    int temp = -1;
//    for (auto x : myHash)
//    {
//        if (x.second == 1)
//        {
//            temp = s.find(x.first);
//            if (temp < min)
//                min = temp;
//        }
//    }
//    if (min == INT32_MAX)
//        min = -1;
//    return min;

//----------------------------version2
    std::unordered_map<char, int> myHash;
    for (auto c : s)
    {
        myHash[c]++;
    }
    for (auto x : s)
    {
        if (myHash[x] == 1)
            return s.find(x);

    }
    return -1;
}