//
// Created by 10372 on 2021/6/17.
//

#include "offer_vivo_1.h"
#include "iostream"
#include "vector"
using namespace std;
int offer_vivo_1::cargo()
{
    vector<int> weight,val;//w-weight v-value
    vector<int> f;
    int V,temp;
    cin >> V;
    while (cin>>temp)
        weight.push_back(temp);
    while (cin>>temp)
        val.push_back(temp);
    if (weight.size() != val.size()) return 0;
    f = vector<int>(V+1,0);
    for (int i = 1; i <= weight.size() ; ++i)
    {
        for (int j = V; j >= weight[i] ; j--)
        {
            f[j] = max(f[j], f[j - weight[i]] + val[i]);
        }
    }
    int ans = f[V];
    cout << ans <<endl;
    return 0;
}
