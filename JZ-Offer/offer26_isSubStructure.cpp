//
// Created by 10372 on 2021/7/25.
//

#include "offer26_isSubStructure.h"
#include "iostream"
bool offer26_isSubStructure::isSubStructure(TreeNode *A, TreeNode *B)
{
    if (B == nullptr)return false;
    if (A == nullptr)return false;
    return findSub(A,B);
}

bool offer26_isSubStructure::confirmSub(TreeNode *node_in_A, TreeNode *B)
{
    if (/*node_in_A == nullptr &&*/ B == nullptr)return true;
    if (node_in_A != nullptr)
    {
        if (node_in_A->val == B->val)
            return confirmSub(node_in_A->left, B->left) && confirmSub(node_in_A->right, B->right);
    }
    return false;
}

bool offer26_isSubStructure::findSub(TreeNode *A, TreeNode *B)
{
    if (A == nullptr)return false;
    if (A->val == B->val)
    {
        if (confirmSub(A,B))return true;
        std::cout << 111;
    }
    if(findSub(A->left, B))return true;
    if(findSub(A->right, B))return true;
    return false;
}
