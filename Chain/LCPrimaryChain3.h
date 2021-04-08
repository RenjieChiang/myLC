//
// Created by tianbot on 2021/3/26.
//

#ifndef MYLEETCODE_LCPRIMARYCHAIN3_H
#define MYLEETCODE_LCPRIMARYCHAIN3_H
namespace MyNode3 {
    struct ListNode {
        int val;
        ListNode *next;

        ListNode() : val(0), next(nullptr) {}

        ListNode(int x) : val(x), next(nullptr) {}

        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
}
class LCPrimaryChain3 {
public:
    MyNode3::ListNode* reverseList(MyNode3::ListNode * head);


};


#endif //MYLEETCODE_LCPRIMARYCHAIN3_H
