//
// Created by tianbot on 2021/4/1.
//

#include "LCPrimaryTree2.h"

using namespace myLCPTree2;
TreeNode * prev;
bool LCPrimaryTree2::isValidBST(myLCPTree2::TreeNode *root)
{
//    if (root == nullptr)
//        return true;
//    if (!(root->right == nullptr || root->val < root->right->val))
//        return false;
//    if (!(root->left == nullptr || root->val > root->left->val))
//        return false;
//    return (isValidBST(root->left) && isValidBST(root->right));

//错误，原因是没有考虑到子树的最大值要小于父节点

//中序遍历 中序遍历的节点的顺序为升序
    if (root == nullptr) return true;
    if ( ! isValidBST(root->left))
        return false;
//    升序的次序处理以下
    if (prev != nullptr && prev->val >= root->val)
        return false;
    prev = root;//更新为此次遍历的节点
    if ( ! isValidBST(root->right))
        return false;
    return true;

//    中序遍历非递归
//
//    如果对树的中序遍历比较熟悉的话，或者看过之前写的《373，数据结构-6,树》，这里面也有树的中序遍历的递归和非递归两种写法。我们完全可以把上面中序遍历的递归改为非递归。
//
//    public boolean isValidBST(TreeNode root) {
//        if (root == null)
//            return true;
//        Stack<TreeNode> stack = new Stack<>();
//        TreeNode pre = null;
//        while (root != null || !stack.isEmpty()) {
//            while (root != null) {
//                stack.push(root);
//                root = root.left;
//            }
//            root = stack.pop();
//            if (pre != null && root.val <= pre.val)
//                return false;
//            //保存前一个访问的结点
//            pre = root;
//            root = root.right;
//        }
//        return true;
//    }
//
//    作者：数据结构和算法
//    链接：https://leetcode-cn.com/leetbook/read/top-interview-questions-easy/xn08xg/?discussion=69ga70
//    来源：力扣（LeetCode）
//    著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

}
