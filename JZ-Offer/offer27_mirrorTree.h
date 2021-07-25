//
// Created by 10372 on 2021/7/25.
//

#ifndef MYLEETCODE_OFFER27_MIRRORTREE_H
#define MYLEETCODE_OFFER27_MIRRORTREE_H

struct TreeNode
{
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int x) : val(x),left(nullptr), right(nullptr){};
};


class offer27_mirrorTree {
public:
    TreeNode * mirrorTree(TreeNode * root);
};


#endif //MYLEETCODE_OFFER27_MIRRORTREE_H
