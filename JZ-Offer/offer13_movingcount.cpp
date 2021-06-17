//
// Created by 10372 on 2021/6/17.
//

#include "offer13_movingcount.h"

int offer13_movingcount::movingCount(int m, int n, int k)
{
    if ( m<=0 || n<=0 || k<0)return 0;
    bool *visited = new bool [m*n];
    for (int i = 0; i < m*n; ++i) visited[i] = false;
    int count = 0;
    count = movingCountCore(m,n,0,0,k,visited);
    delete []visited;
    return count;
}

int offer13_movingcount::movingCountCore(int rows, int cols, int i, int j, int k, bool *visited)
{
    int count = 0;
    if (check(rows,cols,i,j,k,visited))
    {
        visited[i*rows+j] = true;
        count = 1 + movingCountCore(rows,cols,i-1,j,k,visited)
                    + movingCountCore(rows,cols,i+1,j,k,visited)
                    + movingCountCore(rows,cols,i,j-1,k,visited)
                    + movingCountCore(rows,cols,i,j+1,k,visited);
    }
    return count;
}

bool offer13_movingcount::check(int rows, int cols, int i, int j, int k, bool *visited)
{

    if ( i>=0 && j>=0 && i<rows && j<cols)
    {
        if (getDigitSum(i) + getDigitSum(j) <= k)
        {
            if (!visited[i*cols + j])
                return true;
        }
    }
    return false;
}

int offer13_movingcount::getDigitSum(int num)
{
    int sum = 0;
    while (num>0)
    {
        sum += num%10;
        num = num/10;
    }
    return sum;
}

