//https://codeforces.com/contest/2048/problem/0
#include <bits/stdc++.h>
#define LL long long
using namespace std;
void solve()
{
    LL a;
    cin>>a;
    if(a%33==0)cout<<"YES\n";
    else cout<<"NO\n";
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