//
// Created by tianbot on 2021/3/30.
//

#ifndef MYLEETCODE_LCPRIMARYCHAIN5_H
#define MYLEETCODE_LCPRIMARYCHAIN5_H
/*
 * 回文链表

请判断一个链表是否为回文链表。

示例 1:

输入: 1->2
输出: false

示例 2:

输入: 1->2->2->1
输出: true

进阶：
你能否用 O(n) 时间复杂度和 O(1) 空间复杂度解决此题？

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnv1oc/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
 */
namespace myListNode5
{
     struct ListNode {
            int val;
             ListNode *next;
             ListNode() : val(0), next(nullptr) {}
             ListNode(int x) : val(x), next(nullptr) {}
             ListNode(int x, ListNode *next) : val(x), next(next) {}
        };
}

class LCPrimaryChain5 {
public:
    bool isPalindrome(myListNode5::ListNode * head);

};


#endif //MYLEETCODE_LCPRIMARYCHAIN5_H
