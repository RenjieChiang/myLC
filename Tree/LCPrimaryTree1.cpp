//
// Created by tianbot on 2021/3/31.
//

#include "LCPrimaryTree1.h"

int LCPrimaryTree1::maxDepth(myLCPTree1::TreeNode *root) {
    //dfs
    using namespace myLCPTree1;
//    if (root== nullptr)
//        return 0;
//    return std::max(maxDepth(root->left), maxDepth(root->right))+1;

    //BFS
    if (root == nullptr) return 0;
    std::queue<TreeNode*> Q;
    Q.push(root);
    int size_of_layer = 0;
    int dense = 1;
    TreeNode * node;
    while (!Q.empty())
    {
        size_of_layer = Q.size();
        while (size_of_layer > 0)
        {
            node = Q.front();
            Q.pop();
            if (node->left != nullptr) Q.push(node->left);
            if (node->right != nullptr) Q.push(node->right);
            size_of_layer--;
        }
        dense++;
    }
    return dense;
}
