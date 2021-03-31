//
// Created by tianbot on 2021/3/31.
//
/*
 * 二叉树的最大深度

给定一个二叉树，找出其最大深度。

二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。

说明: 叶子节点是指没有子节点的节点。

示例：
给定二叉树 [3,9,20,null,null,15,7]，

    3
   / \
  9  20
    /  \
   15   7

返回它的最大深度 3 。
相关标签
树深度优先搜索递归

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xnd69e/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
 */
//DFS 与 BFS
#ifndef MYLEETCODE_LCPRIMARYTREE1_H
#define MYLEETCODE_LCPRIMARYTREE1_H
#include "iostream"
#include "queue"
namespace myLCPTree1
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
class LCPrimaryTree1 {
public:
    int maxDepth(myLCPTree1::TreeNode* root);

};


#endif //MYLEETCODE_LCPRIMARYTREE1_H
