//
// Created by 10372 on 2021/7/25.
//

#include "offer28_isSymmetric.h"

bool offer28_isSymmetric::isSymmetric(TreeNode *root)
{
    if ( root == nullptr ) return true;
    return SubTreeCheckSym(root->left, root->right);
}

bool offer28_isSymmetric::SubTreeCheckSym(TreeNode *left_sub, TreeNode *right_sub)
{
    if (left_sub == nullptr && right_sub == nullptr) return true;
    if (left_sub == nullptr || right_sub == nullptr) return false;
    if (left_sub->val != right_sub->val) return false;
    if (SubTreeCheckSym(left_sub->left, right_sub->right) && SubTreeCheckSym(left_sub->right, right_sub->left))
        return true;
    return false;
}
