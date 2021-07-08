//
// Created by 10372 on 2021/7/7.
//

#include "SortTHing.h"
#include "iostream"
#include "algorithm"

void SortTHing::bubbleSort(std::vector<int> a)
{
    int temp = 0;
    for (int i = 0; i < a.size()-1; ++i)
    {
        for (int j = 0; j < a.size()-1-i; ++j)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for (auto x : a)
        std::cout << x << "  ";
}

void SortTHing::selectSort(std::vector<int> a)
{
    int max  = 0;
    int index = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        max = a[0];
        index = 0;
        for (int j = 1; j < a.size()-i; ++j)
        {
            if (max < a[j])
            {
                max = a[j];
                index = j;
            }
        }
        a[index] = a[a.size()-1-i];
        a[a.size()-1-i] = max;
    }
    for (auto x : a)
        std::cout << x << "  ";
}

void SortTHing::insertionSort(std::vector<int> a)
{
    int temp;
    for (int i = 1; i < a.size(); ++i)
    {
        for (int j = i; j > 0 ; --j)
        {
            if (a[j] >= a[j-1]) continue;
            temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
        }
    }
    for (auto x : a)
        std::cout << x << "  ";
}

//assistant function for merge sort
void combineArray(std::vector<int> &a, std::vector<int> &temp, int left, int right, int middle)
{
    int i = left;
    int j = middle+1;
    int k = 0;
    while (i<=middle && j<=right)
    {
        if (a[i] <= a[j])
        {
            temp[k] = a[i];
            i++;
            k++;
        } else
        {
            temp[k] = a[j];
            j++;
            k++;
        }
    }
    while (i<=middle)
    {
        temp[k] = a[i];
        k++;
        i++;
    }
    while (j<=right)
    {
        temp[k] = a[j];
        k++;
        j++;
    }
    for (int l = 0; l < k; ++l)
    {
        a[left + l] = temp[l];
    }
}

//  [left, right]
void devideMergeSort(std::vector<int> &a, std::vector<int> &temp, int left, int right)
{
    if (left < right)
    {
        int middle = (left + right)/2;
        devideMergeSort(a, temp, left, middle);
        devideMergeSort(a, temp, middle+1, right);
        combineArray(a, temp, left, right, middle);
    }
}

void SortTHing::mergeSort(std::vector<int> a)
{
    auto temp = new std::vector<int> (a.size(),0);
    devideMergeSort(a, *temp, 0, a.size()-1);
    for (auto x : a)
        std::cout << x << "  ";
}

//assistant function for quick sort
int partitonGroup(std::vector<int>& a, int low, int high)
{
    int standard = a[low];
    while (low < high)
    {
        while (low < high && a[high] >= standard) high--;//找到第一个小于standard的
        a[low] = a[high];
        while (low < high && a[low] <= standard) low++;//找到第一个大于standard的
        a[high] = a[low];//high处原先小值已经被挪走，现空缺补上
    }
    a[low] = standard;
    return low;
}

void quickSortAssist( std::vector<int>& a, int low, int high)
{
    if (low < high)
    {
        int middleStandard = partitonGroup(a, low, high);
        quickSortAssist(a, low, middleStandard-1);
        quickSortAssist(a, middleStandard+1, high);
    }
}

void SortTHing::quickSort(std::vector<int> a) {
    quickSortAssist(a, 0, a.size()-1);
//    for (auto x: a)
//        std::cout << x << "  ";
}

void SortTHing::countSort(std::vector<int> a)
{
    int max = a[0];
    int min = a[0];
    for (auto x:a)
    {
        if (x > max) max = x;
        if (x < min) min = x;
    }
    std::vector<int> count(max-min+1,0);
    for (auto x :a)
    {
        count[x-min]++;
    }
    int j = a.size()-1;
    for (int i = count.size()-1; i >= 0 ; --i)
    {
        while (count[i]>0)
        {
            a[j] = i+min;
            j--;
            count[i]--;
        }
    }
    for (auto x: a)
        std::cout << x << "  ";
}

void SortTHing::bucketSort(std::vector<int> a)
{
    int max = a[0];
    int min = a[0];
    for (auto x:a)
    {
        if (x > max) max = x;
        if (x < min) min = x;
    }
    int bucket_num = (max - min) / a.size() + 1;
    int size = a.size();
    int n;
    std::vector<std::vector<int>> bucket(bucket_num);
    for (auto x: a)
    {
        n = x/size;
        bucket[n].push_back(x);
    }
    for (auto &x_vec : bucket)
        quickSort(x_vec);
    int i = 0;
    for (auto x_vec : bucket)
        for (auto x: x_vec)
        {
            a[i] = x;
            i++;
        }

    for (auto xx: a)
        std::cout << xx << "  ";
}

