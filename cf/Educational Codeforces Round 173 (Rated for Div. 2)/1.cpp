// https://codeforces.com/contest/2043/problem/A
#include <bits/stdc++.h>
#define LL long long
using namespace std;
LL x;
void solve()
{
    x = 1;
    LL n;
    cin >> n;
    while (n > 3)
    {
        x *= 2;
        n /= 4;
    }
    cout << x << '\n';
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}