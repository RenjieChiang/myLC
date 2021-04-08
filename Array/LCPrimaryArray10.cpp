//
// Created by tianbot on 2021/3/22.
//

#include "LCPrimaryArray10.h"
bool LCPrimaryArray10::isValidSudoku(std::vector<std::vector<char>> &board)
{
    std::unordered_map<char,int> myHashMap;
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            if (board[i][j] != '.')
            {
                if ( ! myHashMap.insert({board[i][j],1}).second)
                    return false;
            }
        }
        myHashMap.clear();
    }
    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            if (board[j][i] != '.')
            {
                if ( ! myHashMap.insert({board[j][i],1}).second)
                    return false;
            }
        }
        myHashMap.clear();
    }
    int m,n;
    for (int i = 0; i < 9; ++i)
    {
        m = (i/3)*3;
        n = (i%3)*3;
        for (int j = 0; j < 9; ++j)
        {
            if (board[m+(j/3)][n+(j%3)] != '.')
            {
                if ( ! myHashMap.insert({board[m+(j/3)][n+(j%3)] ,1}).second)
                    return false;
            }
        }
        myHashMap.clear();
    }
    return true;
}