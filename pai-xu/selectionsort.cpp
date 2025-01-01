// 选择后面最小得数进行交换
// 找到最小数的下标
#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
int main()
{
    vector<int> arr{1, 8, 6, 3, 2, 3, 5, 4};
    for (int i = 0; i < arr.size(); ++i)
    {
        int wait = i;
        for (int j = i; j < arr.size(); ++j)
        {
            if (arr[j] > arr[wait])
            {
                wait = j;
            }
            swap(arr[j], arr[wait]);
        }
    }
    for (auto &i : arr)
        cout << i << ' ';
    return 0;
}