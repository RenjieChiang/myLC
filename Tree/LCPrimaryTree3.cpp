//
// Created by tianbot on 2021/4/2.
//

#include "LCPrimaryTree3.h"
#include "vector"
#include "deque"
bool LCPrimaryTree3::isSymmetric(myLCPTree3::TreeNode *root)
{

    using namespace myLCPTree3;
    //先使用迭代方法
//    if (root == nullptr) return true;
//    unsigned int count = 1;
////    std::vector<TreeNode * > fathers;
//    std::deque<TreeNode * > fathers;
////    fathers.push_back(root);
//    fathers.push_back(root);
//    while (!fathers.empty())
//    {
//        auto iter_begin = fathers.begin();
//        auto iter_end = fathers.end() - 1;
//        while (iter_begin < iter_end)
//        {
//            if ((*iter_begin == nullptr && *iter_end == nullptr) /*|| ((*iter_begin)->val == (*iter_end)->val)*/ )
//            {
//                iter_begin++;
//                iter_end--;
//                continue;
//            } else if (*iter_begin == nullptr || *iter_end == nullptr) return false;
//            else if ( (*iter_begin)->val == (*iter_end)->val)
//            {
//                iter_begin++;
//                iter_end--;
//                continue;
//            }
//            return false;
//        }
//        count = fathers.size();
//        for ( ; count>0; count--)
//        {
//            if (fathers.front() == nullptr)
//            {
//                fathers.pop_front();
//                continue;
//            }
//            fathers.push_back(fathers.front()->left);
//            fathers.push_back(fathers.front()->right);
//            fathers.pop_front();
//        }
//    }
//    return true;

//    使用递归方法    双指针 两端反向遍历
    return check(root,root);
}

bool LCPrimaryTree3::check(myLCPTree3::TreeNode *p, myLCPTree3::TreeNode *q)
{
    if (p == nullptr && q == nullptr) return true;
    if (p == nullptr || q == nullptr) return false;
    return p->val == q->val && check(p->left,q->right) && check(p->right, q->left);
}
