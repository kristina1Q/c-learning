// lower_bound 返回第一个不小于value的迭代器
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v = {1, 3, 5, 7, 9};
//     auto it = lower_bound(v.begin(), v.end(), 4);
//     cout << *it;
//     return 0;
// }

// 手写二分模板
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 3, 5, 7, 9};
    auto erfen = [&](auto a, auto arr) -> int
    {
        int left = -1;
        int right = arr.size();
        int mid;
        while (left + 1 != right)
        {
            mid = (left + right) >> 1;
            if (arr[mid] < a)
                left = mid;
            else
                right = mid;
        }
        return arr[right];
    };
    cout << erfen(4, v);
    return 0;
}