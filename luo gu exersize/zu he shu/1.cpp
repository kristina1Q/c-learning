//https://www.luogu.com.cn/problem/B3717
#include <iostream>
#define LL long long
using namespace std;
const int N =5e6+10;
const int MOD=998244353;
LL f[N];
LL inf[N];
LL pow1(LL a)
{
    LL r=1;
    LL n=MOD-2;
    while(n!=0)
    {
        if(n&1)r=(r*a%MOD)%MOD;
        a=(a*a%MOD)%MOD;
        n>>=1;
    }
    return r;
}
void init(LL n)
{
    f[0]=inf[0]=1;
    for(LL i=1;i<=n;i++)
    {
        f[i]=f[i-1]*i%MOD;
        inf[i]=inf[i-1]*pow1(i)%MOD;
    }
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    LL t,r=0,a,b,n,q;
    cin >>t >> n;
    init(n);
    for(LL i=0;i<t;i++)
    {
        cin >> a >> b;
        q=f[a]*inf[b]%MOD*inf[a-b]%MOD;
        if(r==0)r=q;
        else r^=q;
    }
    cout <<r;
    return 0;
}