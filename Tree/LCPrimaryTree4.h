//
// Created by tianbot on 2021/4/5.
//
/*
 * 二叉树的层序遍历

给你一个二叉树，请你返回其按 层序遍历 得到的节点值。 （即逐层地，从左到右访问所有节点）。



示例：
二叉树：[3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7

返回其层序遍历结果：

[
  [3],
  [9,20],
  [15,7]
]

相关标签
树广度优先搜索


作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnldjj/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
 */
#ifndef MYLEETCODE_LCPRIMARYTREE4_H
#define MYLEETCODE_LCPRIMARYTREE4_H

#include "vector"

namespace myLCPTree4
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

class LCPrimaryTree4 {
public:
    std::vector<std::vector<int>> levelOrder(myLCPTree4::TreeNode * root);
};


#endif //MYLEETCODE_LCPRIMARYTREE4_H
