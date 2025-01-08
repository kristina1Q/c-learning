// https://www.luogu.com.cn/problem/P9217
#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
const int MOD = 998244353;
bool cmp(i64 a, i64 b)
{
    return a > b;
}
i64 qpow(i64 a)
{
    i64 n = MOD - 2;
    i64 r = 1;
    while (n != 0)
    {

        if (n & 1)
            r = r % MOD * a % MOD;
        a = a % MOD * a % MOD;
        n >>= 1;
    }
    return r;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    i64 n, p, q, s, w = 1, t, d, sum = 0; // w:计算1-概率的逆元   t概率逆元
    cin >> n >> p >> q >> s;
    t = qpow(q) % MOD * p % MOD;
    d = qpow(q) % MOD * (q - p) % MOD;
    vector<i64> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < n; ++i)
    {
        if (s + arr[i] < arr[0])
            break;
        (sum += w * t % MOD * (arr[i] + s) % MOD) %= MOD; // 维护期望值
        w = d % MOD * w % MOD;
    }
    cout << "2\n"
         << (sum + w % MOD * arr[0]) % MOD;
    return 0;
}