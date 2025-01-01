// 进行间隔为g的插入排序改良
// g=3g+1，即g取1,4,13......
// 复杂度基本维持在O(N^1.25)
#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void insertionsort(vector<int> &arr, int g)
{
    int j;
    for (int i = g; i < arr.size(); ++i)
    {
        int wait = arr[i];
        for (j = i - g; j >= 0 && arr[j] > wait; j -= g)
        {
            arr[j + g] = arr[j];
        }
        arr[j + g] = wait;
    }
}
void shellsort(vector<int> &arr, int n)
{
    vector<int> g;
    for (int i = 1;;)
    {
        if (i > n)
            break;
        g.push_back(i);
        i = 3 * i + 1;
    }
    for (int i = g.size() - 1; i >= 0; --i)
    {
        insertionsort(arr, g[i]);
    }
}
int main()
{
    vector<int> arr{1, 6, 7, 3, 2, 4, 8, 4};
    int n = arr.size();
    shellsort(arr, n);
    for (auto &i : arr)
        cout << i << ' ';
    return 0;
}