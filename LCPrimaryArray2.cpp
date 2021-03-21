//
// Created by tianbot on 2021/3/19.
//

#include "LCPrimaryArray2.h"
#include "iostream"
int LCPrimaryArray2::maxProfit(std::vector<int> &prices)
{
    int profit = 0;
    bool hold_flag = false;//true表示已持有股票
    int hold_price = INT32_MAX;
    for (int i = 1; i < prices.size(); ++i)
    {
        if (prices[i] > prices[i-1])//涨价了
        {
            if (!hold_flag)//未持有则追涨
            {
                hold_flag = true;
                hold_price = prices[i-1];
            }
        }
        if (prices[i] < prices[i-1])//跌价了
        {
            if (hold_flag)//持有则卖出
            {
                hold_flag = false;
                profit += (prices[i-1] - hold_price);
            }
        }
        if (i == prices.size()-1)
        {
            if (hold_flag)
            {
                hold_flag = false;
                profit += (prices[i] - hold_price);
            }
        }
    }
    return profit;
}