//
// Created by 10372 on 2021/6/17.
//

#ifndef MYLEETCODE_OFFER13_MOVINGCOUNT_H
#define MYLEETCODE_OFFER13_MOVINGCOUNT_H


class offer13_movingcount {
public:
    int movingCount(int m, int n, int k);
    int movingCountCore(int rows, int cols, int i, int j, int k, bool *visited);
    bool check(int rows, int cols, int i, int j, int k, bool *visited);
    int getDigitSum(int num);
};


#endif //MYLEETCODE_OFFER13_MOVINGCOUNT_H
