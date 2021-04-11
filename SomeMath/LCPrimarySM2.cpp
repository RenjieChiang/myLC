//
// Created by tianbot on 2021/4/11.
//

#include "LCPrimarySM2.h"
#include "cmath"
int LCPrimarySM2::countPrimes(int n)
{
    int count = 0;
    for (int i = 1; i < n; ++i)
    {
        if(isPrime(i)) count++;
    }
    return count;
}

bool LCPrimarySM2::isPrime(int n)
{
    if(n == 0 || n == 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    int mid = std::sqrt(n);
    for (int i = 3; i <= mid+1; ++i)
    {
        if(n % i == 0) return false;
    }
    return true;
}