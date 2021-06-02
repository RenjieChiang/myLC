//
// Created by 10372 on 2021/6/2.
//

#include "offer4_findNumberIn2DArray.h"

bool offer4_findNumberIn2DArray::findNumberIn2DArray(std::vector<std::vector<int>> &matrix, int target)
{
    if (matrix.empty())return false;
    int n = matrix.size();
    int m = matrix[0].size();
    if (n*m == 0) return false;
    int k = 0;
    int i = 0;
    int j = m-1;
    while (k < n*m)
    {
        if (target < matrix[i][j]) j--;// go left
        else if (target > matrix[i][j]) i++; // go down
        else return true;

        if (j <= -1 || i >= n) return false;
    }
    return false;
}
