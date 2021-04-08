//
// Created by tianbot on 2021/3/31.
//

#include "LCPrimaryChain6.h"

using namespace myListNode6;
bool LCPrimaryChain6::hasCycle(myListNode6::ListNode *head)
{
    if (head == nullptr)
        return false;
    ListNode * temp = head;
    ListNode  myNode;
    while (head->next != nullptr && head->next != &myNode)
    {
        head = head->next;
        temp->next = &myNode;
        temp = head;
    }
    if (head->next == nullptr)
        return false;
    else return true;
}
