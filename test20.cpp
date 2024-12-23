#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int MOD = 1e9+7;

LL inv(LL a) {  
    // //return fpow(a, MOD-2, MOD);  
    // return a == 1 ? 1 : (long long)(MOD - MOD / a) * inv(MOD % a) % MOD;  
    LL r=1;
    LL mo=MOD-2;
    while(mo)
    {
        if(mo&1)r=r*a%MOD;
        a=a*a%MOD;
        mo>>=1;
    }
    return r;
}  

LL C(LL n,LL m)  
{  
    if(m < 0)return 0;  
    if(n < m)return 0;  
    if(m > n-m) m = n-m;  
 
    LL up = 1, down = 1;  
    for(LL i = 0 ; i < m ; i ++){  
        up = up * (n-i) % MOD;   //n的阶乘除以m的阶乘
        down = down * (i+1) % MOD;  
    }  
    return up * inv(down) % MOD;  
}

int main()
{
    LL n,m;
    cin>>n>>m;
    cout<<C(n,m);
    return 0;
}
