//
// Created by 10372 on 2021/7/22.
//

#include "offer24_reverseList.h"

ListNode *offer24_reverseList::reverseList(ListNode *head)
{
    if ( head == nullptr ) return head;
    if ( head->next == nullptr )return head;
    ListNode * behind = head->next;
    ListNode * front = head;
    ListNode * now_node = head;
    while (behind->next != nullptr)
    {
        behind = behind->next;
        now_node = front->next;
        now_node->next = front;
        front = now_node;
    }
    behind->next = front;
    return behind;
}
