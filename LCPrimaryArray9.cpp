//
// Created by tianbot on 2021/3/22.
//

#include "LCPrimaryArray9.h"
std::vector<int> LCPrimaryArray9::twoSum(std::vector<int> &nums, int target)
{
//    std::vector<int> temp = nums;
//    std::sort(temp.begin(), temp.end());
//    std::vector<int> result;
//    int i = 0;
//    int j = nums.size()-1;
//    while (i != j)
//    {
//        if (temp[i] + temp[j] > target)
//            j--;
//        else if (temp[i] + temp[j] < target)
//            i++;
//        else
//        {
//            result.push_back(temp[i]);
//            result.push_back(temp[j]);
//            break;
//        }
//    }
//    if (result.empty())
//    {
//        result.clear();
//        result.push_back(-1);
//        result.push_back(-1);
//        return result;
//    }else
//    {
//        if (result[0] == result[1])
//        {
//            auto iter = std::find(nums.begin(),nums.end(),result[0]);
//            i = iter - nums.begin();
//            j = std::find(iter+1, nums.end(),result[0]) - nums.begin();
//            result.clear();
//            result.push_back(i);
//            result.push_back(j);
//            return result;
//        } else
//        {
//            i = std::find(nums.begin(), nums.end(), result[0]) - nums.begin();
//            j = std::find(nums.begin(), nums.end(), result[1]) - nums.begin();
//            result.clear();
//            result.push_back(i);
//            result.push_back(j);
//            return result;
//        }
//    }


//-------------------------- hash map
    std::unordered_map<int,int> myHash;
//    for (int i = 0; i < nums.size(); ++i)
//    {
//        myHash.insert({nums[i],i});
//    }
    for (int i = 0; i < nums.size(); ++i)
    {
        if (myHash.count(target - nums[i]))
            return {i, myHash.at(target - nums[i])};
        else
            myHash[nums[i]] = i;
    }
    return {-1, -1};
}
