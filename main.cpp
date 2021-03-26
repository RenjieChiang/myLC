#include <iostream>
#include "LCPrimaryChain2.h"

using namespace myListNode;

ListNode * FrontInsert(int x, ListNode * head )
{
    auto temp = new ListNode(x);
    temp->next = head;
    head = temp;
    return head;
}

int main() {
    LCPrimaryChain2 mySolution;
    int a[5] = {1,2,3,4,5};
    auto head = new ListNode(a[4]);
    for (int i = 3; i > -1 ; i--)
    {
        head = FrontInsert(a[i],head);
    }
    mySolution.removeNthFromEnd(head,2);
    ListNode * temp = head;
    while (temp!= nullptr)
    {
        std::cout << temp->val << "  ";
        temp = temp->next;
    }
    return 0;
}
