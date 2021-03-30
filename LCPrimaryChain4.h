//
// Created by tianbot on 2021/3/30.
//
/*
 * 合并两个有序链表

将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。



示例 1：

输入：l1 = [1,2,4], l2 = [1,3,4]
输出：[1,1,2,3,4,4]

示例 2：

输入：l1 = [], l2 = []
输出：[]

示例 3：

输入：l1 = [], l2 = [0]
输出：[0]



提示：

    两个链表的节点数目范围是 [0, 50]
    -100 <= Node.val <= 100
    l1 和 l2 均按 非递减顺序 排列

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnnbp2/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
 */
#ifndef MYLEETCODE_LCPRIMARYCHAIN4_H
#define MYLEETCODE_LCPRIMARYCHAIN4_H

namespace myListNode4
{
    struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
}

class LCPrimaryChain4 {
public:
    myListNode4::ListNode * mergeTwoLists(myListNode4::ListNode * l1, myListNode4::ListNode * l2);
};


#endif //MYLEETCODE_LCPRIMARYCHAIN4_H
