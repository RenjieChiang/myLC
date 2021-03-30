#include <iostream>
#include "LCPrimaryChain2.h"
#include "unistd.h"
#include <cstdio>
using namespace myListNode;

//ListNode * FrontInsert(int x, ListNode * head )
//{
//    auto temp = new ListNode(x);
//    temp->next = head;
//    head = temp;
//    return head;
//}

int main(int argc, char **argv, char **envp) {
    LCPrimaryChain2 mySolution;
    for (int i = 0; argv[i] != nullptr; ++i)
    {
        std::cout << "argv[" << i <<"]: " << argv[i] << std::endl;
    }
    return 0;
}
