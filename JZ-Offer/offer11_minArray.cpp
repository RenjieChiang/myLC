//
// Created by 10372 on 2021/6/16.
//

#include "offer11_minArray.h"

int offer11_minArray::minArray(std::vector<int> &numbers)
{
    if (numbers.size() == 1) return numbers[0];
    int i = 0, j = numbers.size()-1, mid = 0;
    while (numbers[i] >= numbers[j])
    {
        if (j-i == 1)
        {
            mid = j;
            break;
        }
        mid = (i + j)/2;
        if (numbers[mid] > numbers[j])
            i = mid;
        else if (numbers[mid] < numbers[j])
            j = mid;
        else return minInOrder(numbers);
    }
    return numbers[mid];
}

int offer11_minArray::minInOrder(std::vector<int> &numbers) {
    int result = numbers[0];
    for (int number : numbers)
    {
        if (result > number)
            result = number;
    }
    return result;
}
