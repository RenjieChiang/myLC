//
// Created by 10372 on 2021/6/6.
//

#include "offer6_reversePrint.h"

std::vector<int> offer6_reversePrint::reversePrint(ListNode *head)
{
    if (head == nullptr)
        return std::vector<int>();
    std::vector<int> result;
    int count = 1;
    auto ptr_count = head;
    while (ptr_count->next != nullptr)
    {
        count++;
        ptr_count = ptr_count->next;
    }
    result.resize(count);
    for (int i = count-1; i >= 0 ; i--)
    {
        result[i] = head->val;
        head = head->next;
    }
    return result;
}
