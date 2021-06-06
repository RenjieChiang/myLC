//
// Created by 10372 on 2021/6/6.
//

#ifndef MYLEETCODE_OFFER7_BUILDTREE_H
#define MYLEETCODE_OFFER7_BUILDTREE_H

#include "vector"

struct TreeNode
{
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
};

class offer7_buildTree {
public:
    TreeNode * buildTree(std::vector<int> & preorder, std::vector<int> & inorder);

};


#endif //MYLEETCODE_OFFER7_BUILDTREE_H
