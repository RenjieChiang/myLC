//
// Created by tianbot on 2021/3/26.
//

#include "LCPrimaryChain2.h"

using namespace myListNode;

ListNode *LCPrimaryChain2::removeNthFromEnd(ListNode *head, int n)
{
    if (head->next == nullptr)
        return nullptr;
    ListNode * record = head;
    size_t count = 0;
    ListNode * temp = head;
    while (temp != nullptr)
    {
        if (count > n)
            record = record->next;
        temp = temp->next;
        count++;
    }
    if (count == n)
        head = head->next;
    else record->next = record->next->next;
    return head;
}
