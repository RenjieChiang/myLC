//
// Created by tianbot on 2021/3/21.
//

#include "LCPrimaryArray7.h"
std::vector<int> LCPrimaryArray7::plusOne(std::vector<int> &digits)
{
    bool flag = false;//表示需要进位
    auto iter = digits.end() - 1;
    do {
        *iter += 1;
        if (*iter > 9)
        {
            *iter %= 10;
            if (iter == digits.begin())
            {
                digits.insert(digits.begin(),1);
                return digits;
            }
            flag = true;
            iter --;
        } else flag = false;
    } while (flag);
    return digits;
}