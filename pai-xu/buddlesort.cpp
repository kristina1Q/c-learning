// 上浮元素，交换2个量
#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
int ans = 0;
void buddlesort(vector<int> &arr, int n)
{
    bool flag = 1;
    while (flag)
    {
        flag = 0;
        for (int i = n - 2; i >= 0; --i)
        {
            if (arr[i + 1] < arr[i])
            {
                ans++;
                swap(arr[i + 1], arr[i]);
                flag = 1;
            }
        }
    }
}
int main()
{
    int n, m;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> m;
        arr.push_back(m);
    }
    buddlesort(arr, n);
    for (int i = 0; i < n - 1; ++i)
    {
        cout << arr[i] << ' ';
    }
    cout << arr.back();
    cout << '\n';
    cout << ans << '\n';
    return 0;
}