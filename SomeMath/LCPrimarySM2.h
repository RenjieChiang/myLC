//
// Created by tianbot on 2021/4/11.
//
/*
 * 计数质数

统计所有小于非负整数 n 的质数的数量。



示例 1：

输入：n = 10
输出：4
解释：小于 10 的质数一共有 4 个, 它们是 2, 3, 5, 7 。

示例 2：

输入：n = 0
输出：0

示例 3：

输入：n = 1
输出：0



提示：

    0 <= n <= 5 * 106

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnzlu6/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
 */
#ifndef MYLEETCODE_LCPRIMARYSM2_H
#define MYLEETCODE_LCPRIMARYSM2_H


class LCPrimarySM2 {
public:
    int countPrimes(int n);
    bool isPrime(int n);
};


#endif //MYLEETCODE_LCPRIMARYSM2_H
