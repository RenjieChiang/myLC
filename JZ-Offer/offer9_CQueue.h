//
// Created by 10372 on 2021/6/16.
//

#ifndef MYLEETCODE_OFFER9_CQUEUE_H
#define MYLEETCODE_OFFER9_CQUEUE_H
#include "stack"
#include "memory"
class offer9_CQueue {
public:
    offer9_CQueue();
    void appendTail(int value);
    int deleteHead();
    ~offer9_CQueue();

private:
    std::stack<int> * stack_main;
    std::stack<int> * stack_assist;
};


#endif //MYLEETCODE_OFFER9_CQUEUE_H
