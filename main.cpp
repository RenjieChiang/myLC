#include <iostream>
#include "LCPrimaryTree2.h"
#include "unistd.h"
#include <cstdio>
using namespace myLCPTree2;

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
    LCPrimaryTree2 mySolution;
    TreeNode * root;
    auto myTree = new TreeNode[5] ;
    myTree[0].val = 5;
    myTree[0].left = &myTree[1];
    myTree[0].right = &myTree[2];
    myTree[1].val = 1;
    myTree[2].val = 4;
    myTree[2].left = &myTree[3];
    myTree[2].right = &myTree[4];
    myTree[3].val = 3;
    myTree[4].val = 6;
    TreeOut(myTree);
    std::cout << std::endl;
    std::cout << mySolution.isValidBST(myTree);
    delete [] myTree ;
    return 0;
}
