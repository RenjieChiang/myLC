//
// Created by 10372 on 2021/7/25.
//

#ifndef MYLEETCODE_OFFER29_SPIRALORDER_H
#define MYLEETCODE_OFFER29_SPIRALORDER_H

#include "vector"

class offer29_spiralOrder {
public:
    std::vector<int> spiralOrder(std::vector<std::vector<int> > &matrix);
    void outputRecur(std::vector<std::vector<int> > &matrix, std::vector<int> &result);
};


#endif //MYLEETCODE_OFFER29_SPIRALORDER_H
