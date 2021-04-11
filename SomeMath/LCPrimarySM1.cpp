//
// Created by tianbot on 2021/4/11.
//

#include "LCPrimarySM1.h"

std::vector<std::string> LCPrimarySM1::fizzBuzz(int n)
{
    if (n<1) return std::vector<std::string> ();
    std::vector<std::string> result;
    for (int i = 1; i <= n; ++i)
    {
        if (i%15 == 0)
            result.emplace_back("FizzBuzz");
        else if (i%3 == 0)
            result.emplace_back("Fizz");
        else if (i%5 == 0)
            result.emplace_back("Buzz");
        else result.emplace_back(std::to_string(i));
    }
    return result;
}
