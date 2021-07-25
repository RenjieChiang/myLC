//
// Created by 10372 on 2021/7/25.
//

#ifndef MYLEETCODE_OFFER28_ISSYMMETRIC_H
#define MYLEETCODE_OFFER28_ISSYMMETRIC_H

struct TreeNode
{
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int x) : val(x),left(nullptr), right(nullptr){};
};

class offer28_isSymmetric {
public:
    bool isSymmetric(TreeNode * root);
    bool SubTreeCheckSym(TreeNode * left_sub, TreeNode * right_sub);
};


#endif //MYLEETCODE_OFFER28_ISSYMMETRIC_H
