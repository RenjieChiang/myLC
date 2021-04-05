//
// Created by tianbot on 2021/4/5.
//

#ifndef MYLEETCODE_LCPRIMARYTREE5_H
#define MYLEETCODE_LCPRIMARYTREE5_H

#include "vector"

namespace myLCPTree5
{
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
}

class LCPrimaryTree5 {
public:
    myLCPTree5::TreeNode * sortedArrayToBST(std::vector<int> & nums);
};


#endif //MYLEETCODE_LCPRIMARYTREE5_H
