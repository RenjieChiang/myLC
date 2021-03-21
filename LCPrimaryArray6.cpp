//
// Created by tianbot on 2021/3/21.
//

#include "LCPrimaryArray6.h"

std::vector<int> LCPrimaryArray6::intersect(std::vector<int> &nums1, std::vector<int> &nums2)
{
//    std::sort(nums1.begin(), nums1.end());
//    std::sort(nums2.begin(), nums2.end());
//    std::vector<int> result;
//    result.reserve(std::min(nums1.size(), nums2.size()));
//    auto iter1 = nums1.begin();
//    auto iter2 = nums2.begin();
//    while ( iter1 != nums1.end() && iter2 != nums2.end())
//    {
//        if (*iter1 > *iter2)
//            iter2++;
//        else if (*iter1 == *iter2)
//        {
//            result.push_back(*iter2);
//            iter1++;
//            iter2++;
//        }
//        else if (*iter1 < *iter2)
//            iter1++;
//    }
//    return result;

//-----------------------------------------------------------------------
    if (nums1.size() < nums2.size())
        return intersect(nums2, nums1);// num1 size should be > num2
    std::unordered_map<int, int> myMap;
    for (auto x : nums2)
    {
        ++myMap[x];
    }
    std::vector<int> result;
    for (auto x : nums1)
    {
        if (myMap.count(x))
        {
            result.push_back(x);
            --myMap[x];
            if (myMap[x] == 0)
                myMap.erase(x);
        }
    }
    return result;
}