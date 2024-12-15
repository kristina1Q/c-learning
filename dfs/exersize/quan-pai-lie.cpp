//全排列https://www.luogu.com.cn/problem/P1706#submit
#include <bits/stdc++.h>
using namespace std;
int vis[10];
int n;
int arr[10];
void dfs(int a)
{
    if(a==n+1)
    {
        for(int i=1;i<=n;i++)cout <<"    "<<arr[i];
        cout <<'\n';
        return;
    }
    for(int i=1;i<=n;i++)
    {
       if(vis[i]==0)
       {
        vis[i]=1;
        arr[a]=i;
        dfs(a+1);
        vis[i]=0;
       }
    }
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> n;
    dfs(1);
    return 0;
}
