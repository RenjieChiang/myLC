//
// Created by 10372 on 2021/7/28.
//

#include "offer31_validStackSequences.h"

bool offer31_validStackSequences::validStackSequences(std::vector<int> &pushed, std::vector<int> &popped)
{
    if (pushed.size() != popped.size()) return false;
    if (popped.size() == 1)
    {
        if (popped[0] == pushed[0])return true;
        else return false;
    }
    std::vector<int> my_stack;
    my_stack.push_back(pushed[0]);
    int push_now_point = 1;//将要push的数字，第一个数字已经压入栈了
    int pop_now_point = 0;//将要pop的数字

    while ( push_now_point < pushed.size() )
    {
        if ( popped[pop_now_point] == my_stack.back() )
        {
            my_stack.pop_back();
            pop_now_point++;
        } else
        {
            my_stack.push_back( pushed[push_now_point++] );
        }
    }
    //已经全部压入栈了
    while ( pop_now_point < popped.size() )
    {
        if ( my_stack.back() == popped[pop_now_point] )
        {
            my_stack.pop_back();
            pop_now_point++;
        } else return false;
    }
    return true;
}
