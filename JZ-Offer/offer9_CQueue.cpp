//
// Created by 10372 on 2021/6/16.
//

#include "offer9_CQueue.h"

offer9_CQueue::offer9_CQueue()
{
    stack_main = new std::stack<int>;
    stack_assist = new std::stack<int>;
}

void offer9_CQueue::appendTail(int value)
{
    stack_main->push(value);
}

int offer9_CQueue::deleteHead()
{
    if (stack_assist->empty())
    {
        if (stack_main->empty())
            return -1;
        else
        {
            while (!stack_main->empty())
            {
                stack_assist->push(stack_main->top());
                stack_main->pop();
            }
            int result = stack_assist->top();
            stack_assist->pop();
            return result;
        }
    }
    else
    {
        int result = stack_assist->top();
        stack_assist->pop();
        return result;
    }

}

offer9_CQueue::~offer9_CQueue()
{
    delete stack_main;
    delete stack_assist;
}
