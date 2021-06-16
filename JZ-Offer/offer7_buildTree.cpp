//
// Created by 10372 on 2021/6/6.
//

#include "offer7_buildTree.h"
//类似iterate,back所指向的是实际后一位
TreeNode * myTree(std::vector<int> &preorder, std::vector<int> &inorder, int pre_begin, int pre_back, int in_begin, int in_back)
{
    if (pre_begin == pre_back) return nullptr;
    if (pre_begin == pre_back-1)
        return new TreeNode(preorder[pre_begin]);
    int i = 0;
    for ( i = in_begin; i < in_back; ++i)
    {
        if (inorder[i] == preorder[pre_begin]) break;
    }
    auto node_ptr = new TreeNode(preorder[pre_begin]);
    node_ptr->left = myTree(preorder,inorder,pre_begin+1, pre_begin+i-in_begin+1, in_begin, i);
    node_ptr->right = myTree(preorder, inorder, pre_begin+i-in_begin+1, pre_back, i+1, in_back);
    return node_ptr;
}


TreeNode *offer7_buildTree::buildTree(std::vector<int> &preorder, std::vector<int> &inorder)
{
    if (preorder.empty() || inorder.empty()) return nullptr;
    if (preorder.size() != inorder.size()) return nullptr;
    if (preorder.size() == 1)
        return new TreeNode(preorder[0]);
    return myTree(preorder,inorder,0,preorder.size(),0,inorder.size());
}
