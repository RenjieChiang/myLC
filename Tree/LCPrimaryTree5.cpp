//
// Created by tianbot on 2021/4/5.
//

#include "LCPrimaryTree5.h"

myLCPTree5::TreeNode *LCPrimaryTree5::sortedArrayToBST(std::vector<int> &nums)
{
    using namespace myLCPTree5;
    if (nums.size() == 1) return new TreeNode(nums[0]);
    if (nums.size() == 2)
    {
        auto node1 = new TreeNode(nums[1]);
        auto node2 = new TreeNode(nums[0]);
        node1->left = node2;
        return node1;
    }
    std::vector<int> num_left(nums.begin(),nums.begin()+nums.size()/2);
    std::vector<int> num_right(nums.begin()+nums.size()/2 + 1, nums.end());
    auto node = new TreeNode(nums[nums.size()/2]);
    node->left = sortedArrayToBST(num_left);
    node->right = sortedArrayToBST(num_right);
    return node;
}
