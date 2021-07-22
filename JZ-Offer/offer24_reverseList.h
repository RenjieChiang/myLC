//
// Created by 10372 on 2021/7/22.
//

#ifndef MYLEETCODE_OFFER24_REVERSELIST_H
#define MYLEETCODE_OFFER24_REVERSELIST_H

 struct ListNode {
     int val;
     ListNode *next;

     ListNode(int x) : val(x), next(nullptr) {}
 };


class offer24_reverseList{
public:
    ListNode * reverseList(ListNode * head);
};


#endif //MYLEETCODE_OFFER24_REVERSELIST_H
