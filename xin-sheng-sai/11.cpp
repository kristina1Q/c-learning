//这个子序列没按顺序
#include <bits/stdc++.h>
#define LL long long
using namespace std;
const LL MOD =1e9+7;
const LL N =2e5+7;
LL ifac[N];
LL fac[N];
LL Cnm(LL n,LL m)
{
   return fac[n] * ((ifac[n - m] * ifac[m]) % MOD) % MOD; 
}
LL pow1(LL n)
{
    LL d=MOD-2;
    LL r=1;
    while(d)
    {
        if(d&1)r=r*(n%MOD)%MOD;
        n=n*(n%MOD)%MOD;
        d>>=1;
    }
    return r%MOD;
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    fac[0]=ifac[0]=1;
    for(LL i=1;i<N;++i)fac[i]=fac[i-1]*i%MOD;
    ifac[N-2]=pow1(fac[N-2])%MOD;
    for(LL i=N-3;i>=2;--i)
    {
        ifac[i]=ifac[i+1]*(i+1)%MOD;
    }
    LL n,k,ans=0;
    cin >>n>>k;
    int m;
    int num[3]{};
    for(LL i=0;i<n;++i){
        cin>>m;
        num[m]++;
    }
    for(LL i=0;i<=k/2;++i)
    {
        if(num[0]>=i&&num[1]>=k-i)
        {
            ans+=Cnm(num[0],i)*Cnm(num[1],k-i)%MOD;
        }
    }
    cout<<ans%MOD;
    return 0;
}