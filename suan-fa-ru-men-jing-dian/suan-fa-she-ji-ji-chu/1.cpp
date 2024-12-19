//https://www.luogu.com.cn/problem/UVA11292
#include<bits/stdc++.h>
#define LL long long
using namespace std;
inline LL read()
{
    LL r=0;
    char c=getchar();
    while(c<'0'||c>'9')c=getchar();
    while(c>='0'&&c<='9'){
        r=(r<<3)+(r<<1)+(c^48);
        c=getchar();
    } 
    return r;
}
void solve(LL n,LL m)
{
    LL ch=0; //第一个头的最小的金币
    LL res=0;
    vector<LL> arr1(n);
    vector<LL> arr2(m);
    for(LL i=0;i<n;i++)arr1[i]=read();
    for(LL i=0;i<m;i++)arr2[i]=read();
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    stack<LL> stk;
    for(LL i=0;i<arr2.size();i++){
        if(ch==n){
            cout<<res<<'\n';
            return;
        }
        stk.push(i);
        while(arr2[stk.top()]>=arr1[ch]&&ch<n){
            res+=arr2[stk.top()];
            ch++;
        }
    }
        cout<<"Loowater is doomed!\n";
}
int main()
{
    LL n,m;
    for(;;){
        n=read(),m=read ();
        if(n==0&&m==0)break;
        solve(n,m);
    }
    return 0;
}