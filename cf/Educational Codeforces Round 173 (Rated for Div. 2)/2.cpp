//https://codeforces.com/contest/2043/problem/B
// 判断7：
// 找出每个数所需最小的7的阶乘，只要n>=它就行
// k=(m!-n!)/n!
// m为现在的数，n为所需的最小数，可以证明，k在m>=n时必为整数
// 因此它的增量也就是能除7的最小倍
#include <bits/stdc++.h>
#define LL long long
using namespace std;
void fin(int d,LL n)
{
    int min1=6;
    if(d==7||n>=3)cout<<7<<' ';
}
void solve()
{
    LL n;
    int d;
    cin>>n>>d;
    cout<<1<<' ';
    if(d%3==0||n>=3)cout<<3<<' ';
    if(d==5)cout<<5<<' ';
    fin(d,n);
    if(d==9||n>=6||(n>=3&&d%3==0))cout<<9;
    cout<<'\n';
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
