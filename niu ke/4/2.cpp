#include <bits/stdc++.h>
using namespace std;
using i64 =long long;
vector<int> res;
void solve()
{
    int a[15]{};
    int ou=0,ji=0;
    string arr;
    cin>>arr;
    for(int i=0;i<arr.size();++i)
    {
        a[arr[i]-48]++;
    }
    if(arr[4]||arr[8])
    {
        res.push_back(1);
        return;
    }
    if(arr[2]&&(arr[1]||arr[3]||arr[5]||arr[7]||arr[9]))
    {
        res.push_back(1);
        return;
    }
    res.push_back(0);

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
    for(int i=0;i<res.size();++i)
    {
        if(res[i])cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}