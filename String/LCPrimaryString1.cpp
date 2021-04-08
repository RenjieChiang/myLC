//
// Created by tianbot on 2021/3/22.
//

#include "LCPrimaryString1.h"
void LCPrimaryString1::reverseString(std::vector<char> &s)
{
    size_t i = 0;
    size_t j = s.size() - 1;
    size_t size = s.size();
    for (; i < size/2; i++)
    {
        std::swap(s[i], s[j]);
        j--;
    }
    for (auto c : s)
        std::cout << c << " ";
}