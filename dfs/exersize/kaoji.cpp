#include <bits/stdc++.h>
using namespace std;
int n;
int ans=0; //记录方案总数
int d=1;
int vis[11]{};
int arr[11]{};
void dfs1(int step,int result)
{
    // cout <<result<<"\n";
    if(result>n)
    {
        return;
    }
    if(step==11&&result==n)
    {
        ans++;
        // for(int i=1;i<=10;i++)cout<<arr[i]<<" ";
        // cout <<"\n";
        return;
    }
    if(step==11)return;
    for(int i=1;i<=3;i++)
    {
            vis[step]=1;
            arr[step]=i;
            result+=i;
            dfs1(step+1,result);
            result-=i;
            vis[step]=0;
    }
}
void dfs2(int step,int result)
{
    // cout <<result<<"\n";
    if(result>n)
    {
        return;
    }
    if(step==11&&result==n)
    {
        for(int i=1;i<=10;i++)cout<<arr[i]<<" ";
        cout <<"\n";
        return;
    }
    if(step==11)return;
    for(int i=1;i<=3;i++)
    {
            vis[step]=1;
            arr[step]=i;
            result+=i;
            dfs2(step+1,result);
            result-=i;
            vis[step]=0;
    }
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >>n;
    if(n<10||n>30)cout <<"0";
    else 
    {
    dfs1(1,0);
    cout <<ans<<"\n";
    dfs2(1,0);
    }
    return 0;
}