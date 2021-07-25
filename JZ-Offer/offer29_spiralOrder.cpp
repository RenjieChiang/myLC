//
// Created by 10372 on 2021/7/25.
//

#include "offer29_spiralOrder.h"
#include "iostream"
std::vector<int> offer29_spiralOrder::spiralOrder(std::vector<std::vector<int>> &matrix)
{
    std::vector<int> result;
    if ( matrix.empty() ) return result;
    outputRecur(matrix, result);
    return result;
}

void offer29_spiralOrder::outputRecur(std::vector<std::vector<int>> &matrix, std::vector<int> &result)
{
    int length_matrix = matrix[0].size();
    int width_matrix = matrix.size();
    if (length_matrix <= 0)return;
    if (length_matrix == 1)
    {
        for (int i = 0; i < width_matrix; ++i)
        {
            result.push_back(matrix[i][0]);
        }return;
    }
    for (auto x : matrix[0])
        result.push_back(x);
    if (width_matrix == 1) return;
    if (width_matrix == 2)
    {
        for (int i = length_matrix-1; i >= 0; --i)
        {
            result.push_back(matrix[1][i]);
        }
        return;
    }
    for (int i = 1; i < width_matrix; ++i)
    {
        result.push_back(matrix[i][length_matrix-1]);
    }
    for (int i = length_matrix-2; i >= 0; --i)
    {
        result.push_back(matrix[width_matrix-1][i]);
    }
    for (int i = width_matrix-2; i > 0; --i)
    {
        result.push_back(matrix[i][0]);
    }
    matrix.pop_back();
    matrix.erase(matrix.begin());
    for (int i = 0; i < width_matrix-2; ++i)
    {
        matrix[i].pop_back();
        matrix[i].erase(matrix[i].begin());
    }
    outputRecur(matrix, result);
}
