#include <iostream>
#include "Array//LCPMiddleArray1.h"
#include "unistd.h"
#include <cstdio>
//using namespace myLCPTree3;

#include "iostream"
#include "vector"
#include "JZ-Offer/offer20_isNumber.h"
int main()
{
//    std::vector<int> num= {1,-1,-1,0};
//    LCPMiddleArray1 solution;
//    for (auto x_v : solution.threeSum(num))
//
//    {
//        for (auto x : x_v)
//            std::cout<<x<<" ";
//        std::cout<< std::endl;
//    }
//
//
//    return 0;
//    vector<int> weight,val;//w-weight v-value
//    vector<int> f;
//    int V,temp;
//    cin >> V;
//    getchar();
//
//    while (cin>>temp)
//    {
//        if (temp=='\n')break;
//        weight.push_back(temp);
//
//    }
//    getchar();
//    while (cin>>temp)
//    {
//        if (temp=='\n')break;
//        val.push_back(temp);
//
//    }
//
//    if (weight.size() != val.size()) return 0;
//    f = vector<int>(V+1,0);
//    for (int i = 1; i <= weight.size() ; ++i)
//    {
//        for (int j = V; j >= weight[i] ; j--)
//        {
//            f[j] = max(f[j], f[j - weight[i]] + val[i]);
//        }
//    }
//    int ans = f[V];
//    cout << ans <<endl;
//    return 0;

    std::string my_s (".");
    offer20_isNumber myObject;
    std::cout << myObject.isNumber(my_s);
    return 0;


}
