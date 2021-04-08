//
// Created by tianbot on 2021/3/22.
//

#include "LCPrimaryArray11.h"
void LCPrimaryArray11::rotate(std::vector<std::vector<int>> &matrix)
{
    size_t size = matrix.size();
    for (int i = 0; i < size/2; ++i)
    {
        std::swap(matrix[i], matrix[size-1-i]);
    }
    for (int i = 0; i < size; ++i)
    {
        for (int j = i+1; j < size; ++j)
        {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (auto x_v : matrix)
    {
        for (auto x : x_v)
            std::cout << x << "  ";
        std::cout << std::endl;
    }

}