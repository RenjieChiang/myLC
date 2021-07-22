//
// Created by 10372 on 2021/7/22.
//

#ifndef MYLEETCODE_OFFER22_GETKTHFROMEND_H
#define MYLEETCODE_OFFER22_GETKTHFROMEND_H



  struct ListNode {
     int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
  };

class offer22_getkthFromEnd {
public:
    ListNode* getKthFromEnd(ListNode * head, int k);

};


#endif //MYLEETCODE_OFFER22_GETKTHFROMEND_H
