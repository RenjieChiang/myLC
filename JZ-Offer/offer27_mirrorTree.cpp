//
// Created by 10372 on 2021/7/25.
//

#include "offer27_mirrorTree.h"

TreeNode *offer27_mirrorTree::mirrorTree(TreeNode *root)
{
    if ( root == nullptr ) return nullptr;
    if ( root->left == nullptr && root->right == nullptr ) return root;
    TreeNode * temp;
    temp = root->left;
    root->left = root->right;
    root->right = temp;
    mirrorTree(root->left);
    mirrorTree(root->right);
    return root;
}
