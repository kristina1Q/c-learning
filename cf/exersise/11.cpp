//https://codeforces.com/problemset/problem/2052/A
#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,m;
    LL ans=0;
    cin>>n;
    vector<int> arr;
    vector<int> arrf(n+1,0);
    vector<int> arrf2;
    arr.push_back(0);
    for(int i=0;i<n;++i)
    {
        cin>>m;
        arr.push_back(m);
    }
    for(int i=1;i<=n;++i)
    {
        arrf[i]=i;
    }
    arrf2=arrf;
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)
        {
            if(arrf[j]==arr[i])
            {
                ans+=(n-j)*2;
                for(int z=j;z>i;--z)
                {
                    swap(arrf[z],arrf[z-1]);
                    // cout<<arrf[z]<<' '<<arrf[z-1]<<'\n';
                    ans++;
                }
                break;
            }
        }
    }
    cout<<ans<<'\n';

    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)
        {
            if(arrf2[j]==arr[i])
            {
                if(n-j>0)
                {
                    for(int x=j+1;x<=n;++x)
                {
                    swap(arrf2[x],arrf2[x-1]);
                    cout<<arrf2[x-1]<<' '<<arrf2[x]<<'\n';
                }
                for(int x=n;x>=j+1;--x)
                {
                    swap(arrf2[x],arrf2[x-1]);
                    cout<<arrf2[x-1]<<' '<<arrf2[x]<<'\n';
                }
                }
                for(int z=j;z>i;--z)
                {
                    swap(arrf2[z],arrf2[z-1]);
                    cout<<arrf2[z-1]<<' '<<arrf2[z]<<'\n';
                }
                break;
            }
        }
    }
    return 0;
}