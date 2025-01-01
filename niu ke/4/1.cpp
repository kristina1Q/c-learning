#include <bits/stdc++.h>
using namespace std;
using i64 =long long;
vector<i64> res;
void solve()
{
    i64 x,y;
    cin>>x>>y;
    i64 q=y/(x+1);
    if (x == 0) {  
        // 每按一次奇数次才能得到 1 元  
        res.push_back(2 * y - 1);  
        return;  
    }  
    if(q*(x+1)==y){
        res.push_back(2*q);
        return;
    }
    if(q*(x+1)+1==y){
        res.push_back(q*2+1);
        return;
    }
    else{
        res.push_back(q*2+2);
        return;
    }
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
    for(auto i:res)cout<<i<<'\n';
    return 0;
}