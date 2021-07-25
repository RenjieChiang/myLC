//
// Created by 10372 on 2021/7/25.
//

#ifndef MYLEETCODE_OFFER25_MERGETWOLISTS_H
#define MYLEETCODE_OFFER25_MERGETWOLISTS_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class offer25_mergeTwoLists {
public:
    ListNode* mergeTwoLists(ListNode * l1, ListNode * l2);

};


#endif //MYLEETCODE_OFFER25_MERGETWOLISTS_H
