//
// Created by tianbot on 2021/4/2.
//
/*
 * 称二叉树

给定一个二叉树，检查它是否是镜像对称的。



例如，二叉树 [1,2,2,3,4,4,3] 是对称的。

    1
   / \
  2   2
 / \ / \
3  4 4  3



但是下面这个 [1,2,2,null,3,null,3] 则不是镜像对称的:

    1
   / \
  2   2
   \   \
   3    3



进阶：

你可以运用递归和迭代两种方法解决这个问题吗？

作者：力扣 (LeetCode)
链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xn7ihv/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
 */
#ifndef MYLEETCODE_LCPRIMARYTREE3_H
#define MYLEETCODE_LCPRIMARYTREE3_H

namespace myLCPTree3
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
class LCPrimaryTree3 {
public:
    bool isSymmetric(myLCPTree3::TreeNode * root);
    bool check(myLCPTree3::TreeNode *p, myLCPTree3::TreeNode *q);
};


#endif //MYLEETCODE_LCPRIMARYTREE3_H
