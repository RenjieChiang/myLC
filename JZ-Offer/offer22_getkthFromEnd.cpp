//
// Created by 10372 on 2021/7/22.
//

#include "offer22_getkthFromEnd.h"

ListNode *offer22_getkthFromEnd::getKthFromEnd(ListNode *head, int k)
{
    ListNode * slow = head;
    ListNode * fast = head;
    for (int i = 0; i < k-1; ++i) {
        fast = fast->next;
    }
    while ( fast->next != nullptr )
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}
