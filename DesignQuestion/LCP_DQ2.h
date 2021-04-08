//
// Created by tianbot on 2021/4/8.
//

#ifndef MYLEETCODE_LCP_DQ2_H
#define MYLEETCODE_LCP_DQ2_H

#include "vector"
#include "iostream"
class LCP_DQ2 {
public:
    /** initialize your data structure here. */
    LCP_DQ2();
    void push(int val);
    void pop();
    int top();
    int getMin() ;

private:
    int stack_top;
    int min;
    std::vector<int> stack_;
    std::vector<int> min_in_stack_;
};


#endif //MYLEETCODE_LCP_DQ2_H
