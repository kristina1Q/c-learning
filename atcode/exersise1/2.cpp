//https://atcoder.jp/contests/abc385/tasks/abc385_b
#include <bits/stdc++.h>
#define LL long long
using namespace std;
char a[102][102]{};
bool b[102][102]{};
int h,w,x,y;
int ans=0,len,now=0;
string arr;
void searching()
{
    while(now<len)
    {
        // cout<<x<<' '<<y<<'\n';
        if(arr[now]=='U')
        {
            x--;
            now++;
            if(a[x][y]=='@'&&!b[x][y]){
            b[x][y]=1;
            ans++;
        }
            if(a[x][y]=='#')x++;
        }
        else if(arr[now]=='D'){
            x++;
            now++;
            if(a[x][y]=='@'&&!b[x][y]){
            b[x][y]=1;
            ans++;
        }
            if(a[x][y]=='#')x--;
        }
        else if(arr[now]=='L'){
            y--;
            now++;
            if(a[x][y]=='@'&&!b[x][y]){
            b[x][y]=1;
            ans++;
        }
            if(a[x][y]=='#')y++;
        }
        else if(arr[now]=='R'){
            y++;
            now++;
            if(a[x][y]=='@'&&!b[x][y]){
            b[x][y]=1;
            ans++;
        }
            if(a[x][y]=='#')y--;
        }
        // cout<<ans<<'\n';
    }
}
int main()
{
    cin>>h>>w>>x>>y;
    for(int i=1;i<=h;++i){
        for(int j=1;j<=w;++j)
        {
            cin>>a[i][j];
        }
    }
    cin>>arr;
    len=arr.size();
    searching();
    cout<<x<<' '<<y<<' '<<ans;
    return 0;
}