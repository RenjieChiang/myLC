//
// Created by chiang on 2021/5/18.
//

#include "LCPMiddleArray1.h"
#include "algorithm"
std::vector<std::vector<int>> LCPMiddleArray1::threeSum(std::vector<int> &nums) {
/*    if (nums.size()<3)
        return std::vector<std::vector<int>>();
    std::sort(nums.begin(), nums.end());
//    std::map<int ,int > myHashMap;
//    for (auto x : nums)
//        myHashMap.insert({x,x});
    std::vector<std::vector<int>> result;
    int a,b,c;
    unsigned int size = nums.size();
    for (int i = 0; i < size-2; ++i)
    {
        if (i>0 && nums[i] == a) continue;
        if (nums[i]>0) return result;
        a = nums[i];
        for (int j = i+1; j < size-1; ++j)
        {
            if (nums[j] == nums[j-1] && j-1 != i) continue;
            b = nums[j];
            if ((c=-a-b) < b) break;
            for (int k = j+1; k < size; ++k)
            {
                if (nums[k] == c)
                {
                    result.push_back(std::vector<int> {a,b,c});
                    break;
                }
                if (nums[k] > c) break;
            }
        }
    }
    return result;
}
 */

//double pointer
    if (nums.size() < 3)
        return std::vector<std::vector<int>>();
    std::sort(nums.begin(), nums.end());
    std::vector<std::vector<int>> result;
    int a,b,c;
    unsigned int size = nums.size();
    for (int i = 0; i < size-2; ++i)
    {
        if (i>0 && nums[i] == a) continue;
        if (nums[i]>0) return result;
        a = nums[i];
        int j=i+1;
        int k = size-1;
        while (j<k)
        {
            if (j!=i+1&&nums[j] == nums[j-1]  )
            {
                j++;
                continue;
            }
            if (k!=size-1 && nums[k] == nums[k+1])
            {
                k--;
                continue;
            }
            b = nums[j];
            c = -a-b;
            if ( c > nums[k] )
            {
                j++;
                continue;
            }
            if ( c == nums[k] )
            {
                result.push_back(std::vector<int> {a,b,c});
                k--;
                j++;
                continue;
            }
            if (c<nums[k])
            {
                k--;
            }
        }
    }
    return result;

}
