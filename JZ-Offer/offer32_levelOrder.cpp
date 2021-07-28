//
// Created by 10372 on 2021/7/28.
//

#include "offer32_levelOrder.h"
#include "deque"
std::vector<int> offer32_levelOrder::levelOrder(TreeNode *root) {
    if ( root == nullptr ) return std::vector<int>();
    std::deque<TreeNode*> myQue;
    std::vector<int> result;
    myQue.push_back(root);
    while ( !myQue.empty() )
    {
        if (myQue.front()->left != nullptr)
            myQue.push_back(myQue.front()->left);
        if (myQue.front()->right != nullptr)
            myQue.push_back(myQue.front()->right);
        result.push_back(myQue.front()->val);
        myQue.pop_front();
    }
    return result;
}
