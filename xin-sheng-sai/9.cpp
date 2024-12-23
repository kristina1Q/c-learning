//https://ac.nowcoder.com/acm/contest/98528/B
#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    LL n,m;
    LL res1=0,res2=0,res3=0;
    cin>>n;
    vector<LL> arr;
    arr.push_back(0);
    for(LL i=1;i<=n;++i){
        cin>>m;
        arr.push_back(m);
        res1+=m;
        res2+=i*m;
        res3+=i*i*m;
    }
    // cout<<res1<<' '<<res2;
    double a=1.0*res2/res1;
    LL b=res2/res1;
    // cout<<a<<' '<<b;
    if(a-b>0.5){
        LL x=b+1;
        LL c=x*x*res1-2*x*res2+res3;
        // cout<<x<<' '<<res1<<' '<<res2<<' '<<res3<<'\n';
        cout<<c;
    }
    else
    {
        LL x=b;
        LL c=x*x*res1-2*x*res2+res3;
        // cout<<x<<' '<<res1<<' '<<res2<<' '<<res3<<'\n';
        cout<<c;
    }
    return 0;
}