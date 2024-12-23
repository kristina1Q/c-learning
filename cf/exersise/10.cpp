//https://codeforces.com/problemset/problem/2035/C
#include <bits/stdc++.h>
#define LL long long
using namespace std;
void solve()
{
    LL n;
    cin>>n;
    if((n&1)==0){
        // cout<<"not\n";
        LL r=0,c=0;
        for(LL i=1;i<=n;i++){
            if((n|i)>=r){
                c=i;
                r=n|i;
            }
        }
        // cout<<r<<' '<<c<<'\n';
        cout<<r<<'\n';
        cout<<2<<' ';
        for(LL i=4;i<n;++i)
        {
            if(i!=c&&i!=c-1)
            cout<<i<<' ';
        }
        cout<<1<<' '<<3<<' '<<c-1<<' '<<c<<' '<<n<<'\n';
    }
    else
    {
        cout<<n<<'\n';
        cout<<2<<' ';
        for(LL i=4;i<n-1;++i)
        {
            cout<<i<<' ';
        }
        cout<<1<<' '<<3<<' '<<n-1<<' '<<n<<'\n';
    }
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}