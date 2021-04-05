#include <iostream>
#include "LCPrimaryTree3.h"
#include "unistd.h"
#include <cstdio>
using namespace myLCPTree3;

//ListNode * FrontInsert(int x, ListNode * head )
//{
//    auto temp = new ListNode(x);
//    temp->next = head;
//    head = temp;
//    return head;
//}

void TreeOut(TreeNode * root)
{
    if (root == nullptr) return;
    TreeOut(root->left);
    std::cout << root->val << "  ";
    TreeOut(root->right);
}

int main()
{
    LCPrimaryTree3 mySolution;
    TreeNode * root;
    auto myTree = new TreeNode[7] ;
    myTree[0].val = 1;
    myTree[0].left = &myTree[1];
    myTree[0].right = &myTree[2];

    myTree[1].val = 2;
    myTree[2].val = 2;
//    myTree[1].left = &myTree[3];
    myTree[1].right = &myTree[4];
//    myTree[2].left = &myTree[5];
    myTree[2].right = &myTree[6];

//    myTree[3].val = 3;
    myTree[4].val = 3;
//    myTree[5].val = 4;
    myTree[6].val = 3;
    TreeOut(myTree);
    std::cout << std::endl;
    std::cout << mySolution.isSymmetric(myTree);
    delete [] myTree ;
    return 0;
}
