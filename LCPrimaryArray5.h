//
// Created by tianbot on 2021/3/19.
//

#ifndef MYLEETCODE_LCPRIMARYARRAY5_H
#define MYLEETCODE_LCPRIMARYARRAY5_H
#include "vector"
#include "set"
/*
 * 位运算 的数学规律
 *
 *
 * 交换律
a|b = b|a
a&b = b&a
a^b = b^a


结合律
(a|b)|c = a|(b|c)
(a&b)&c = a&(b&c)
(a^b)^c = a^(b^c)


分配律(其他类推)
a&(b|c) = (a&b)|(a&c)
a^(b|c)=(a^b)|(a^c)


其他
a|0 = a
a&1 = a
a&0 = 0


a^a = 0
a^0 =a


a|~a = 1
a&~a = 0
a&a = a
a|a = a


a|(a&b) = a
a&(a|b) = a
 */
class LCPrimaryArray5 {
public:
    int singleNumber(std::vector<int> & nums);


};


#endif //MYLEETCODE_LCPRIMARYARRAY5_H
