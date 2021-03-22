//
// Created by tianbot on 2021/3/21.
//
/*
 * 给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

示例:

输入: [0,1,0,3,12]
输出: [1,3,12,0,0]

说明:

    必须在原数组上操作，不能拷贝额外的数组。
    尽量减少操作次数。

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/x2ba4i/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
 */
#ifndef MYLEETCODE_LCPRIMARYARRAY8_H
#define MYLEETCODE_LCPRIMARYARRAY8_H
#include "vector"
#include "iostream"
class LCPrimaryArray8 {
public:
    void moveZeroes(std::vector<int>& nums);
};


#endif //MYLEETCODE_LCPRIMARYARRAY8_H
