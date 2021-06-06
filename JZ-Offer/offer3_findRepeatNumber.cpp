////
//// Created by 10372 on 2021/6/2.
////
//
//#include "offer3_findRepeatNumber.h"
//#include "unordered_map"
//int offer3_findRepeatNumber::findRepeatNumber(std::vector<int> &nums) {
////    std::unordered_map<int, int> myHash;
////    for (auto x : nums)
////    {
////        if (myHash.count(x) == 0)
////            myHash[x]++;
////        else
////            return x;
////    }
////    return 0;
////    if (nums.empty())
////        return -1;
////    int temp = -1;
////    for (int i = 0; i < nums.size(); ++i)
////    {
////        while (nums[i] != i)
////        {
////            if (nums[i] == nums[nums[i]])
////                return nums[i];
////
////            //swap
////            temp = nums[nums[i]];
////            nums[nums[i]] = nums[i];
////            nums[i] = temp;
////        }
////    }
////    return 0;
////}
//}