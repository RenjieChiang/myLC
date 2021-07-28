//
// Created by 10372 on 2021/7/28.
//

#ifndef MYLEETCODE_OFFER30_MINSTACK_H
#define MYLEETCODE_OFFER30_MINSTACK_H

#include "vector"

class offer30_MinStack {
public:
    void push(int x);
    void pop();
    int top();
    int min();
private:
    std::vector<int> StackMain;
    std::vector<int> StackAssist;
};


#endif //MYLEETCODE_OFFER30_MINSTACK_H
