#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
int main()
{
    i64 n;
    cin >> n;
    vector<string> arr(5005);
    string c(2000, '0');
    c[0] = '1';
    arr[0] = arr[1] = c;
    auto algo = [&](string a, string b) -> string
    {
        string res(2000, '0');
        int rem = 0;
        for (int i = 0; i < a.size() || i < b.size(); ++i)
        {
            rem = res[i] + a[i] + b[i] - 3 * '0';
            if (rem >= 10)
            {
                res[i + 1] += rem / 10;
                res[i] = rem % 10 + '0';
            }
            else
                res[i] = rem % 10 + '0';
        }
        return res;
    };
    for (int i = 2; i <= n; ++i)
    {
        arr[i] = algo(arr[i - 1], arr[i - 2]);
    }
    // cout << arr[n];
    for (auto i = arr[n].rbegin(); i < arr[n].rend(); ++i)
    {
        if (*i >= '1' && *i <= '9')
        {
            for (auto j = i; j < arr[n].rend(); ++j)
            {
                cout << *j;
            }
            break;
        }
    }
    return 0;
}