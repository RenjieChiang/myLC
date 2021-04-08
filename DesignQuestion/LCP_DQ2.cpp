//
// Created by tianbot on 2021/4/8.
//

#include "LCP_DQ2.h"

LCP_DQ2::LCP_DQ2()
{
     stack_top = -1;
     min = INT32_MAX;
}

void LCP_DQ2::push(int val)
{
    stack_top++;
    stack_.push_back(val);
    min = std::min(min, val);
    min_in_stack_.push_back(min);
}

void LCP_DQ2::pop()
{
    stack_top--;
    stack_.pop_back();
    min_in_stack_.pop_back();
}

int LCP_DQ2::top() {
    return stack_.back();
}

int LCP_DQ2::getMin()
{
    return min_in_stack_.back();
}



