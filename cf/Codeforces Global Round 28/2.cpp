//https://codeforces.com/contest/2048/problem/B
#include <bits/stdc++.h>
#define LL long long
using namespace std;
void solve()
{
    LL n,k,res=0;
    cin>>n>>k;
    if(k==1){
        for(int i=1;i<=n;i++)cout<<i<<' ';
        cout<<'\n';
        return;
    }
    else
    {
    LL re=k-1;
    LL l=1,r=n;
    LL ans=0;
    while(1){
        while(re--){
            cout<<r<<' ';
            res++;
            if(res==n){
                cout<<'\n';
                return;
            }
            r--;
        }
        re=k-1;
        cout<<l<<' ';
        res++;
        if(res==n){
            cout<<'\n';
            return;
        }
        l++;
    }
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