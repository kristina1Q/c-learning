//第一种，预处理组合数，杨辉三角dp，适用于n，m小于10^4的
//杨辉三角dp
//c[n][m]=c[n-1][m]+c[n-1][m-1]如果m=0，令其等于1
// #include <iostream>
// using namespace std;
// int arr[4000][4000]{};
// int main()
// {
//     int n,m;
//     cin >> n >> m;
//     for(int i=0;i<=n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             if(j==0)arr[i][j]=1;
//             else
//             {
//                 arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
//             }
//         }
//     }
//     cout << arr[n][m];
//     return 0;
// }


//第二种快速幂加逆元
//费马小定理:a^(p-1)≡1(mod p)
//逆元：ab≡1(mod p)称b为a mod p下的逆元，记为b=a^(-1);
//费马定理应用逆元，求a^(-1)即为求a^(p-2)，两边同时乘a^(-1)
//C(a选b)可以表示为a!/(b!(a-b)!)，转化为a!*(b!)^(-1)*((a-b)!)^(-1)然后运用费马小定理改良版
// 现在，我们的重点是求阶乘和阶乘的逆元。我们用两个数组 fact[] 和 infact[] 分别表示阶乘
//(fact[a] 为 a ! a!a!)和阶乘的逆元(infact[a] 表示 ( a ! ) − 1 (a!)^{-1}(a!) −1
//(a!)^(-1)=((a-1)!)^(-1)*a^(-1)=infact[i-1]*a^(-1)
//  )。规定 fact[0] = infact[0] = 1 \text{fact[0] = infact[0] = 1}fact[0] = infact[0] = 1。
// mod需为质数，定为1e9+7，不然有问题


// #include <iostream>
// using namespace std;
// typedef long long ll;  
// const int N = 1e5 + 10;  
// ll mod = 1e9 + 7;  
// ll fact[N], infact[N];  

// ll quick_pow(ll a, ll b) {  
//     ll ans = 1;  
//     while (b) {  
//         if (b & 1) ans = (ans * a) % mod;  
//         a = a * a % mod;  
//         b >>= 1;  
//     }  
//     return ans;  
// }  

// void init() {  
//     // 预处理因子相关mod p的逆元  
//     fact[0] = infact[0] = 1;  
//     for (int i = 1; i <= N; i++) {  
//         fact[i] = fact[i - 1] * i % mod;  
//     }  

//     for (int i = 1; i <= N; i++) {  
//         infact[i] = quick_pow(fact[i], mod - 2) % mod;  
//         // infact[i] = infact[i - 1] * quick_pow(i, mod - 2) % mod;  
//     }  
// }

// int main()  
// { // 主程序  
// init(); // 初始化factorials和逆元   

// ll a, b;  
// cin >> a >>b;
// ll ans = fact[a] * infact[a - b] % mod * infact[b] % mod;  
// cout << ans << endl;  
// return 0;
// }


#include <iostream>
using namespace std;
#define LL long long
const int MOD=1e9+7;
const int maxn=1e5+10;
LL fact[maxn]{};
LL infact[maxn]{};
LL pow1(LL a)
{
    LL n=MOD-2,r=1;
    while(n!=0)
    {
        if(n&1)r=(r*a)%MOD;
        a=(a*a)%MOD;
        n>>=1;
    }
    return r%MOD;
}
void init()
{
    for(LL i=1;i<=maxn;i++)
    {
        fact[i]=fact[i-1]*i%MOD;
        infact[i]=infact[i-1]*pow1(i)%MOD;
    }
}
int main()
{
    fact[0]=infact[0]=1;
    init();
    int a,b;
    cin >> a >>b;
    cout <<fact[a]*infact[b]*infact[a-b]%MOD;
    return 0;
}