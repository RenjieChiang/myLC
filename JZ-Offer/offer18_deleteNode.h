//
// Created by 10372 on 2021/7/1.
//

#ifndef MYLEETCODE_OFFER18_DELETENODE_H
#define MYLEETCODE_OFFER18_DELETENODE_H

struct ListNode
{
    int val;
    ListNode * next;
    ListNode(int x) : val(x), next(nullptr){}
};
class offer18_deleteNode {
public:
    ListNode * deleteNode(ListNode * head, int val);

};


#endif //MYLEETCODE_OFFER18_DELETENODE_H
