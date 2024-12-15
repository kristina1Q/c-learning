//https://www.luogu.com.cn/problem/P1835
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
const int maxn=1e6+10;
bool tell[maxn];
int primes[maxn];
int main()
{
    long long l,r,now=0,ans=0;
    scanf("%lld%lld",&l,&r);
    for(int i=2;i<=50000;i++)
    {
        if(!tell[i])primes[++now]=i;
        for(int j=1;j<=now&&primes[j]*i<=50000;j++)
        {
            tell[primes[j]*i]=1;
            if(i%primes[j]==0)break;
        }
    }
    l=l==1?2:l;
    memset(tell,0,sizeof(tell));
    for(int i=1;i<=now;i++)
    {
        long long p=primes[i];
        long long start=(l+p-1)/p*p>2*p?(l+p-1)/p*p:2*p;
        for(long long j=start;j<=r;j+=p)
        {
            tell[j-l+1]=1;
        }
    }
    for(int i=1;i<=r-l+1;i++)
    {
        if(!tell[i])ans++;
    }

    printf("%lld",ans);
    return 0;
}