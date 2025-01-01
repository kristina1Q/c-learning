//https://codeforces.com/contest/2043/problem/C
#include <bits/stdc++.h>
using namespace std;
using i64 =long long;

#if !defined(ONLINE_JUDGE) && defined(LOCAL)
#include "helper.h"
bool IS_LOCAL =true;
#else
#define dbg(...);
bool IS_LOCAL =false;
#endif
template<typename T>
bool smin(T &a,const T &b)
{
    return a>b?a=b,1:0;
}
template<typename T>
bool smax(T &a,const T &b)
    {
        return b>a?a=b,1:0;
    }
void solve()
{
    int n,pos=-1;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(arr[i]!=-1&&arr[i]!=1)pos=i;
    }
    auto calc =[&](int l,int r)->array<int,2>{
        int mi=0,ma=0;
        array<int,2> res{0,0};
        if(l>r)return res;
        int cur=0;
        for(int i=l;i<=r;++i)
        {
            cur+=arr[i];
            smin(res[0],cur-ma);
            smax(res[1],cur-mi);
            smin(mi,cur);
            smax(ma,cur);
        }
        return res;
    };
    if(pos==-1)
{
    auto r1=calc(0,n-1);
    cout<<r1[1]-r1[0]+1<<'\n';
    for(int i=r1[0];i<=r1[1];++i)cout<<i<<' ';
    cout<<'\n';
    return;
}
    auto r1=calc(0,pos-1);
    auto r2=calc(pos+1,n-1);
    int cur=0;
    array<int,2> r3{arr[pos],arr[pos]};
    for(int i=pos-1;i>=0;--i)
    {
        cur+=arr[i];
        smin(r3[0],cur+arr[pos]);
        smax(r3[1],cur+arr[pos]);
    }
    cur=0;
    int t1=r3[0],t2=r3[1];
    for(int i=pos+1;i<n;++i)
    {
        cur+=arr[i];
        smin(r3[0],t1+cur);
        smax(r3[1],t2+cur);
    }
    set <int> res;
    for(int i=r1[0];i<=r1[1];++i)res.insert(i);
    for(int i=r2[0];i<=r2[1];++i)res.insert(i);
    for(int i=r3[0];i<=r3[1];++i)res.insert(i);
    cout<<res.size()<<'\n';
    for(auto &i:res)cout<<i<<' ';
    cout<<'\n';
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}