//
// Created by 10372 on 2021/7/28.
//

#ifndef MYLEETCODE_OFFER32_LEVELORDER_H
#define MYLEETCODE_OFFER32_LEVELORDER_H
#include "vector"
struct TreeNode
{
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int x): val(x),  left(nullptr), right(nullptr){}
};

class offer32_levelOrder {
public:
    std::vector<int> levelOrder (TreeNode * root);
};


#endif //MYLEETCODE_OFFER32_LEVELORDER_H
