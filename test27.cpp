#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
const int MOD = 998244353;
const int N = 1e5 + 7;
i64 fac[N], ifac[N];
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
    return r % MOD;
}
int main()
{
    fac[0] = ifac[0] = 1;
    i64 n, m, ma;
    cin >> n >> m;
    ma = n - m > m ? (n - m) : m;
    for (int i = 1; i < N; ++i)
        fac[i] = fac[i - 1] * i % MOD;
    ifac[ma] = qpow(fac[ma]) % MOD;
    for (int i = ma - 1; i >= 1; --i)
    {
        ifac[i] = ifac[i + 1] * (i + 1) % MOD;
    }
    cout << fac[n] * ((ifac[n - m] * ifac[m]) % MOD) % MOD;
    return 0;
}