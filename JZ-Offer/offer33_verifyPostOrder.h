//
// Created by 10372 on 2021/7/28.
//

#ifndef MYLEETCODE_OFFER33_VERIFYPOSTORDER_H
#define MYLEETCODE_OFFER33_VERIFYPOSTORDER_H

#include "vector"
class offer33_verifyPostOrder {
public:
    bool verifyPostOrder( std::vector<int> & postorder );

private:
    bool verifyPostOrder_assist( std::vector<int> & postorder, int begin, int end );

};


#endif //MYLEETCODE_OFFER33_VERIFYPOSTORDER_H
