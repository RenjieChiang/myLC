//
// Created by tianbot on 2021/4/8.
//

#ifndef MYLEETCODE_LCPRIMARYDQ1_H
#define MYLEETCODE_LCPRIMARYDQ1_H

#include "vector"

 class LCPrimaryDQ1 {
 public:
    LCPrimaryDQ1(std::vector<int> & nums);
    std::vector<int> reset();
    std::vector<int> shuffle();

 private:
    std::vector<int> nums_;
};


#endif //MYLEETCODE_LCPRIMARYDQ1_H
