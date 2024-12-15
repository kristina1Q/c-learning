#include <iostream>
#define LL long long
using namespace std;
const int N =1e7+10;
LL dp[N];
LL min1(LL a,LL b)
{
    if(a>0&&b>0)
    {
        return min(a,b);
    }
    else if(b==0)
    {
        return a;
    }
    else if(a==0)
    {
        return b;
    }
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    dp[3]=dp[5]=1;
    long t;
    cin >>t;
    LL n;
    for(long m=0;m<t;m++)
    {
        cin >> n;
    for(LL i=6;i<=N;i++)
    {
        if(dp[i-3]||dp[i-5])dp[i]=min1(dp[i-3],dp[i-5])+1;
    }
    if(dp[n])cout <<dp[n] << "\n";
    else cout << "-1\n";
    }
    return 0;
}