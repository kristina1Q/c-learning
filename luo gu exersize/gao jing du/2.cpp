#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    string a, b;
    cin >> a >> b;
    auto algo = [&](string c, string d) -> string
    {
        string a(504, '0'), b(504, '0');
        for (int i = c.size() - 1; i >= 0; --i)
            a[c.size() - i - 1] = c[i];
        for (int i = d.size() - 1; i >= 0; --i)
            b[d.size() - i - 1] = d[i];
        string res(504, '0');
        int rem;
        for (int i = 0; i < a.size(); ++i)
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
        string re;
        reverse(res.begin(), res.end());
        for (int i = 0; i < res.size(); ++i)
        {
            if (res[i] > '0' && res[i] <= '9')
            {
                string cs(res, i, res.size() - i);
                re = cs;
                break;
            }
            if (i == res.size() - 1)
            {
                re = "0";
            }
        }
        return re;
    };
    cout << algo(a, b);
    return 0;
}