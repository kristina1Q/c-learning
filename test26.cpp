#include <bits/stdc++.h>
#define int long long
using namespace std;
using i64 = long long;
const int mod = 998244353;
const int MOD = 998244353;
bool cmp(int a, int b)
{
    return a > b;
}
int qpow(int a)
{
    int r = 1;
    int b = mod - 2;
    while (b)
    {
        if (b & 1)
            r = r % mod * a % mod;
        a = a % mod * a % mod;
        b >>= 1;
    }
    return r;
} // 快速幂，用于计算逆元
main()
{
    ios::sync_with_stdio(false);
    int n, q, p, s, c = 0, w = 1;
    i64 t, m, sum;
    cin >> n >> p >> q >> s;
    t = qpow(q) % mod * p % mod;
    m = qpow(q) % mod * (q - p) % mod;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end(), cmp); // 降序排序
    for (int i : a)
    {
        if (i + s < a[0])
            break;                                   // 该数不可能成为答案，退出循环
        (sum += w * t % MOD * (i + s) % MOD) %= MOD; // 维护期望值
        w = m % mod * w % mod;
    } // 执行算法流程
    cout << "2\n"
         << (c + w * a[0] % mod) % mod << endl;
    return 0;
}