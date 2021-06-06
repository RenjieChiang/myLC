//
// Created by 10372 on 2021/6/6.
//

#include "offer7_buildTree.h"

TreeNode *offer7_buildTree::buildTree(std::vector<int> &preorder, std::vector<int> &inorder)
{
    if (preorder.empty() || inorder.empty()) return nullptr;
    if (preorder.size() == 1)
        return new TreeNode(preorder[0]);
    int i = 0;
    for (i = 0; i < inorder.size(); ++i)
    {
        if (inorder[i] == preorder[0]) break;
    }

    auto node_ptr = new TreeNode(preorder[0]);

}
