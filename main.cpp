#include <iostream>
#include "Array//LCPMiddleArray1.h"
#include "unistd.h"
#include <cstdio>
//using namespace myLCPTree3;


int main()
{
    std::vector<int> num= {1,-1,-1,0};
    LCPMiddleArray1 solution;
    for (auto x_v : solution.threeSum(num))

    {
        for (auto x : x_v)
            std::cout<<x<<" ";
        std::cout<< std::endl;
    }


    return 0;

}
