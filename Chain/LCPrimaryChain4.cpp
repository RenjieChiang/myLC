//
// Created by tianbot on 2021/3/30.
//

#include "LCPrimaryChain4.h"
using namespace myListNode4;
myListNode4::ListNode *LCPrimaryChain4::mergeTwoLists(myListNode4::ListNode *l1, myListNode4::ListNode *l2)
{
//    if (l1 == nullptr)
//        return l2;
//    if (l2 == nullptr)
//        return l1;
//    ListNode * head;
//    if (l1->val >= l2->val)
//    {
//        head = l2;
//        l2 = l2->next;
//    }
//    else
//    {
//        head = l1;
//        l1 = l1->next;
//    }
//    ListNode * temp = head;
//    while (l2 != nullptr && l1 != nullptr)
//    {
//        if (l1->val >= l2->val)
//        {
//            temp->next = l2;
//            l2 = l2->next;
//            temp = temp->next;
//        } else
//        {
//            temp->next = l1;
//            l1 = l1->next;
//            temp = temp->next;
//        }
//    }
//    while (l1 != nullptr)
//    {
//        temp->next = l1;
//        l1 = l1->next;
//        temp = temp->next;
//    }
//    while (l2 != nullptr)
//    {
//        temp->next = l2;
//        l2 = l2->next;
//        temp = temp->next;
//    }
//    return head;
    if (l1 == nullptr)
        return l2;
    else if (l2 == nullptr)
        return l1;
    else if (l1->val > l2->val)
    {
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    } else
    {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    }
}
