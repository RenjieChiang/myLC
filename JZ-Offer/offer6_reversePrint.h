//
// Created by 10372 on 2021/6/6.
//

#ifndef MYLEETCODE_OFFER6_REVERSEPRINT_H
#define MYLEETCODE_OFFER6_REVERSEPRINT_H

#include "vector"

struct ListNode
{
    int val;
    ListNode * next;
    ListNode(int x): val(x), next(nullptr) {}
};

class offer6_reversePrint {
public:
    std::vector<int> reversePrint(ListNode * head);

};


#endif //MYLEETCODE_OFFER6_REVERSEPRINT_H
