//
// Created by 10372 on 2021/7/28.
//

#include "offer30_MinStack.h"

void offer30_MinStack::push(int x) {
    StackMain.push_back(x);
    if (StackAssist.empty())
        StackAssist.push_back(x);
    else
        StackAssist.push_back( x <= StackAssist.back() ? x : StackAssist.back() );
}

void offer30_MinStack::pop() {
    StackAssist.pop_back();
    StackMain.pop_back();
}

int offer30_MinStack::top() {
    return StackMain.back();
}

int offer30_MinStack::min() {
    return StackAssist.back();
}
