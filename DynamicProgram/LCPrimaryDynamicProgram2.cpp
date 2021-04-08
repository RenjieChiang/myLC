//
// Created by tianbot on 2021/4/5.
//

#include "LCPrimaryDynamicProgram2.h"

int LCPrimaryDynamicProgram2::maxProfit(std::vector<int> &prices)
{
//    if (prices.size() == 1) return 0;
//    int diff[prices.size()-1];
//    int last_positive = 0;
//    int sum = 0;
//    int max_profit = 0;
//    for (int i = 1; i < prices.size(); ++i)
//    {
//        diff[i-1] = prices[i] - prices[i-1];
//        if (diff[i-1] > 0)
//            last_positive = i-1;
//    }
//    for (int i = 0; i <= last_positive; ++i)
//    {
//        if (diff[i] <= 0) continue;
//        sum = 0;
//        for (int j = i; j <= last_positive; ++j)
//        {
//            sum += diff[j] ;
//            if (max_profit < sum)
//                max_profit = sum;
//        }
//    }
//    return max_profit;

    //超时

    //another!
    int min = prices[0], max_profit = 0;
    for (int price : prices)
    {
        max_profit = std::max(max_profit, price - min);
        min = std::min(min, price);//在第二步更新min，可以保证max计算的时候min都在当下price之前
    }
    return max_profit;
}
