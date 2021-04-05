//
// Created by tianbot on 2021/4/5.
//

#include "LCPrimaryTree4.h"
#include "deque"
std::vector<std::vector<int>> LCPrimaryTree4::levelOrder(myLCPTree4::TreeNode *root)
{
    using namespace myLCPTree4;
    std::deque<TreeNode * > tree_number;
    std::vector<std::vector<int> > result;
    tree_number.push_back(root);
    TreeNode * q;
    size_t size = 1;
    while (!tree_number.empty())
    {
        std::vector<int> level;
        for (int i = 0; i < size; ++i)
        {
            q = tree_number.front();
            tree_number.pop_front();
            if (q == nullptr)
                continue;
            level.push_back(q->val);
            tree_number.push_back(q->left);
            tree_number.push_back(q->right);
        }
        if (level.empty())break;
        result.push_back(level);
        size = tree_number.size();
    }
    return result;
}
