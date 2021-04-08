//
// Created by tianbot on 2021/3/26.
//

#include "LCPrimaryChain1.h"

void LCPrimaryChain1::deleteNode(ListNode *node)
{
    node->val = node->next->val;
    node->next = node->next->next;
}
