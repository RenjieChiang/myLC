//
// Created by tianbot on 2021/3/26.
//

#include "LCPrimaryChain3.h"
using namespace MyNode3;
MyNode3::ListNode *LCPrimaryChain3::reverseList(MyNode3::ListNode *head)
{
    if (head == nullptr)
        return nullptr;
    if (head->next == nullptr)
        return head;
    ListNode * result= reverseList(head->next);
    auto temp = result;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->next = head;
    head->next = nullptr;
    return result;
}
