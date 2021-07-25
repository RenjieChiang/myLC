//
// Created by 10372 on 2021/7/25.
//

#include "offer25_mergeTwoLists.h"

ListNode *offer25_mergeTwoLists::mergeTwoLists(ListNode *l1, ListNode *l2) {
    if (l1 == nullptr)return l2;
    if (l2 == nullptr)return l1;
    auto  now_node = new ListNode(0);
    auto temp_head = now_node;
//    ListNode * head2 = l2;
    ListNode * l1_ptr1 = l1;
//    ListNode * l1_ptr2 = l1->next;
    ListNode * l2_ptr1 = l2;
//    ListNode * l2_ptr2 = l2->next;
    while (l1_ptr1 != nullptr && l2_ptr1 != nullptr)
    {
        if (l1_ptr1->val >= l2_ptr1->val)
        {
            now_node->next = l2_ptr1;
            now_node = l2_ptr1;
            l2_ptr1 = l2_ptr1->next;
        } else
        {
            now_node->next = l1_ptr1;
            now_node = l1_ptr1;
            l1_ptr1 = l1_ptr1->next;
        }
    }
    if (l1_ptr1 == nullptr)
    {
        now_node->next = l2_ptr1;
    } else now_node->next = l1_ptr1;
    auto head = temp_head->next;
    delete temp_head;
    return head;
}
