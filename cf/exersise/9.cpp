//https://codeforces.com/problemset/problem/2036/D
#include <bits/stdc++.h>
#include <stdio.h>
#define LL long long
using namespace std;
inline int read()
{
    int r=0;
    char c=getchar();
    while(c<'0'||c>'9')c=getchar();
    while(c>='0'&&c<='9'){
        r=(r<<3)+(r<<1)+(c^48);
        c=getchar();
    }
    return r;
}
void solve()
{
    int n,m,ans=0,x=0,y=0,layer=2,ix=0,iy=0,ln,lm,res=0,lenth;
    n=read();
    m=read();
    ln=n,lm=m;
    vector<vector<int>> arr(n,vector<int>(m)); 
    vector<int> arr2{};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%1d",&arr[i][j]);
        }
    }
    for(;;){
        while(x==ix&&y<m-1){
            arr2.push_back(arr[x][y]);
            y++;
            ans++;
        }
        while(y==m-1&&x<n-1){
            arr2.push_back(arr[x][y]);
            x++;
            ans++;
        }
        while(x==n-1&&y>iy){
            arr2.push_back(arr[x][y]);
            y--;
            ans++;
        }
        while(y==iy&&x>ix){
        arr2.push_back(arr[x][y]);
        x--;
        ans++;
        }
        --m;
        --n;
        ix++,iy++;
        x=ix,y=iy;
        lenth=arr2.size();
        if(arr2[0]==5&&arr2[1]==4&&arr2[2]==3&&arr2.back()==1)res++;
        if(arr2[0]==4&&arr2[1]==3&&arr2.back()==5&&arr2[lenth-2]==1)res++;
        if(arr2[0]==3&&arr2[lenth-1]==4&&arr2[lenth-2]==5&&arr2[lenth-3]==1)res++;
        for(int i=0;i<=lenth-4;i++){
            if(arr2[i]==1&&arr2[i+1]==5&&arr2[i+2]==4&&arr2[i+3]==3)res++;
        }
        arr2.clear();
        if(ans==ln*lm)break;
    }
    cout<<res<<'\n';
}
int main()
{
    int t;
    t=read();
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}