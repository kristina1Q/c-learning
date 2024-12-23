//https://codeforces.com/contest/2048/problem/C
#include <bits/stdc++.h>
#define LL long long
using namespace std;
void solve()
{
    string arr;
    cin>>arr;
    int l2=1,r2=arr.size(),l1=1,r1=1;
    int i,j,q;
    for(i=0;i<arr.size();i++)
    {
        if(arr[i]=='0')
        {
            l1=i,r1=arr.size()-i;
            int max1=0,ans;
            for(j=i-1;j>=0;--j){
                ans=0;
                for(q=j;q<=arr.size()-(i-j)-1;++q)
                {
                    if(arr[q+(i-j)]!=arr[q])ans++;
                    else break;
                }
                if(ans>max1){
                l1=j+1;
                r1=arr.size()-(i-j);
                max1=ans;
                }
            }
            // cout<<max1<<'\n';
            cout<<l1<<' '<<r1<<' '<<l2<<' '<<r2<<'\n';
            return;
        }
    }
    cout<<l1<<' '<<r1<<' '<<l2<<' '<<r2<<'\n';
    return;
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
    return 0;
}