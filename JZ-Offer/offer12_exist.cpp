//
// Created by 10372 on 2021/6/17.
//

#include "offer12_exist.h"

//二维数组传参不易应改成一维数组或者指针
bool offer12_exist::exist(std::vector<std::vector<char>> &board,  std::string& word)
{

    if (board.empty())return false;
    if (word.empty())return true;
    int size_width = board.size();
    int size_length = board[0].size();
    int size_word = word.size();
    int n = 0;

    int a[size_width][size_length] ;
    for (int i = 0; i < size_width; ++i) {
        for (int j = 0; j < size_length; ++j) {
            a[i][j] = 0;
        }
    }

    for (int i = 0; i < size_width; ++i)
    {
        for (int j = 0; j < size_length; ++j)
        {
            if (board[i][j] == word[0])
            {
                a[i][j] = 1;
                if (existInBackTracking(board,word,(int ** )a,i,j,n,size_length,size_width,size_word))
                    return true;
                else
                {
                    a[i][j] = 0;
                }
            }
        }
    }
    return false;
}


bool offer12_exist::existInBackTracking(std::vector<std::vector<char>> &board, std::string &word, int **a, int i, int j, int n,
                                        int size_length, int size_width, int size_word)
{
    if (n < size_word-1)
    {
        if (j-1 >= 0)
        {
            if (board[i][j-1] == word[n] || a[i][j-1] == 0)
            {

                a[i][j-1] = 1;
                if (existInBackTracking(board,word,a,i,j-1,++n,size_word,size_width,size_word))
                    return true;
                else
                {
                    a[i][j-1] = 0;
                }
            }
        }
        if (j+1 <= size_width-1)
        {
            if (board[i][j+1] == word[n] || a[i][j+1] == 0)
            {

                a[i][j+1] = 1;
                if (existInBackTracking(board,word,a,i,j+1,++n,size_word,size_width,size_word))
                    return true;
                else
                {
                    a[i][j+1] = 0;
                }
            }
        }
        if (i+1 <= size_length-1)
        {
            if (board[i+1][j] == word[n] || a[i+1][j] == 0)
            {

                a[i+1][j] = 1;
                if (existInBackTracking(board,word,a,i+1,j,++n,size_word,size_width,size_word))
                    return true;
                else
                {
                    a[i+1][j] = 0;
                }
            }
        }
        if (i-1 >= 0)
        {
            if (board[i-1][j] == word[n] || a[i-1][j] == 0)
            {

                a[i-1][j] = 1;
                if (existInBackTracking(board,word,a,i-1,j,++n,size_word,size_width,size_word))
                    return true;
                else
                {
                    a[i-1][j] = 0;
                }
            }
        }
        return false;

    } else return true;
}

