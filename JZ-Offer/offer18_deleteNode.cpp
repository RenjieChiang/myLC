//
// Created by 10372 on 2021/7/1.
//

#include "offer18_deleteNode.h"

ListNode *offer18_deleteNode::deleteNode(ListNode *head, int val)
{
    if (head == nullptr || head->next == nullptr)
        return nullptr;
    if (head->val == val)
        return head->next;
    auto ptr_now_point = head;
    while (ptr_now_point->next != nullptr)
    {
        if (ptr_now_point->next->val == val)
            break;
        ptr_now_point = ptr_now_point->next;
    }
    //推出循环后，ptr指向匹配位置之前的那个节点
    ptr_now_point->next = ptr_now_point->next->next;
    return head;


}
