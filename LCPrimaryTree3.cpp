//
// Created by tianbot on 2021/4/2.
//

#include "LCPrimaryTree3.h"
#include "vector"
bool LCPrimaryTree3::isSymmetric(myLCPTree3::TreeNode *root)
{

    using namespace myLCPTree3;
    if (root == nullptr) return true;
    unsigned int count = 1;
    std::vector<TreeNode * > fathers;
    fathers.push_back(root);
    while (!fathers.empty())
    {
        auto iter_begin = fathers.begin();
        auto iter_end = fathers.end() - 1;
        while (iter_begin < iter_end)
        {
            if ((*iter_begin == nullptr && *iter_end == nullptr) || ((*iter_begin)->val == (*iter_end)->val) )
            {
                iter_begin++;
                iter_end--;
                continue;
            }
            return false;
        }
        count = fathers.size();
        for ( ; count>0; count--)
        {
            if (fathers.front() == nullptr)
            {
                fathers.pop_back();
                continue;
            }
            fathers.push_back(fathers.front()->left);
            fathers.push_back(fathers.front()->right);
            fathers.pop_back();
        }
    }
    return true;
}
