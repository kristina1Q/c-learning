// 第一种，预处理组合数，杨辉三角dp，适用于n，m小于10^4的
// 杨辉三角dp
// c[n][m]=c[n-1][m]+c[n-1][m-1]如果m=0，令其等于1
//  #include <iostream>
//  using namespace std;
//  int arr[4000][4000]{};
//  int main()
//  {
//      int n,m;
//      cin >> n >> m;
//      for(int i=0;i<=n;i++)
//      {
//          for(int j=0;j<=i;j++)
//          {
//              if(j==0)arr[i][j]=1;
//              else
//              {
//                  arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
//              }
//          }
//      }
//      cout << arr[n][m];
//      return 0;
//  }

// 第二种快速幂加逆元
// 费马小定理:a^(p-1)≡1(mod p)
// 逆元：ab≡1(mod p)称b为a mod p下的逆元，记为b=a^(-1);
// 费马定理应用逆元，求a^(-1)即为求a^(p-2)，两边同时乘a^(-1)
// C(a选b)可以表示为a!/(b!(a-b)!)，转化为a!*(b!)^(-1)*((a-b)!)^(-1)然后运用费马小定理改良版
//  现在，我们的重点是求阶乘和阶乘的逆元。我们用两个数组 fact[] 和 infact[] 分别表示阶乘
//(fact[a] 为 a ! a!a!)和阶乘的逆元(infact[a] 表示 ( a ! ) − 1 (a!)^{-1}(a!) −1
//(a!)^(-1)=((a-1)!)^(-1)*a^(-1)=infact[i-1]*a^(-1)
//   )。规定 fact[0] = infact[0] = 1 \text{fact[0] = infact[0] = 1}fact[0] = infact[0] = 1。
//  mod需为质数，定为1e9+7，不然有问题

#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int MOD = 1e9 + 7;

int inv(int a)
{
    // return fpow(a, MOD-2, MOD);
    return a == 1 ? 1 : (long long)(MOD - MOD / a) * inv(MOD % a) % MOD;
}
LL C(LL n, LL m)
{
    if (m < 0)
        return 0;
    if (n < m)
        return 0;
    if (m > n - m)
        m = n - m;

    LL up = 1, down = 1;
    for (LL i = 0; i < m; i++)
    {
        up = up * (n - i) % MOD; // n的阶乘除以m的阶乘
        down = down * (i + 1) % MOD;
    }
    return up * inv(down) % MOD; // 用逆元计算
}

int main()
{
    LL n, m;
    cin >> n >> m;
    cout << C(n, m);
    return 0;
}

// 正常标准版：
const int N = 数据 const int MOD = 数据
    LL
    Cnm(LL n, LL m)
{
    return fac[n] * ((ifac[n - m] * ifac[m]) % MOD) % MOD;
}
LL pow1(LL n)
{
    LL d = MOD - 2;
    LL r = 1;
    while (d)
    {
        if (d & 1)
            r = r * (n % MOD) % MOD;
        n = n * (n % MOD) % MOD;
        d >>= 1;
    }
    return r % MOD;
}

int main()
{
    fac[0] = ifac[0] = 1;
    for (LL i = 1; i < N; ++i)
        fac[i] = fac[i - 1] * i % MOD;
    ifac[N - 1] = pow1(fac[N - 1]);
    for (LL i = N - 2; i >= 1; --i)
    {
        ifac[i] = ifac[i + 1] * (i + 1) % MOD;
    }
    return 0;
}