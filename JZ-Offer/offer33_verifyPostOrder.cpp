//
// Created by 10372 on 2021/7/28.
//

#include "offer33_verifyPostOrder.h"

bool offer33_verifyPostOrder::verifyPostOrder(std::vector<int> &postorder)
{
    if (postorder.empty())return true;
    return verifyPostOrder_assist(postorder, 0, postorder.size()-1);
}

bool offer33_verifyPostOrder::verifyPostOrder_assist(std::vector<int> &postorder, int begin, int end) //左右闭合
{
    if (begin == end) return true;
    if (begin > end) return true;
    int root_node = postorder[end];
    int i = begin;
    for ( ; i < end; ++i)
    {
        if (postorder[i] > root_node)
            break;
    }
    int left_end = i - 1;
    int right_begin = i;
    for (; i < end; ++i)
    {
        if (postorder[i] < root_node)
            return false;
    }
    return verifyPostOrder_assist(postorder,begin,left_end) && verifyPostOrder_assist(postorder,right_begin,end-1);
}
