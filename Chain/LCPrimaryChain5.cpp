//
// Created by tianbot on 2021/3/30.
//
//反转链表可以使用就地的双链表法，即拆除又安装，也可以用栈等方法
#include "LCPrimaryChain5.h"
using namespace myListNode5;
bool LCPrimaryChain5::isPalindrome(myListNode5::ListNode *head)
{
    ListNode * temp = head;
    unsigned int count = 0;
    while (temp != nullptr)
    {
        temp = temp->next;
        count++;
    }
    temp = head;
    ListNode * new_head = nullptr;
    //将链表对半拆除重整倒序，成对消除成功即是慧文
    for (int i = 0; i < count/2; ++i)
    {
        temp = head;
        head = head->next;
        temp->next = new_head;
        new_head = temp;
    }
    if (count % 2)
        head = head->next;
    while (head != nullptr && new_head != nullptr)
    {
        if (head->val != new_head->val)
            return false;
        head = head->next;
        new_head = new_head->next;
    }
    return true;
}
