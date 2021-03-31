//
// Created by tianbot on 2021/3/30.
//

#ifndef MYLEETCODE_LCPRIMARYCHAIN5_H
#define MYLEETCODE_LCPRIMARYCHAIN5_H

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
