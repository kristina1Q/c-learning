//https://codeforces.com/problemset/problem/474/B
//前缀和
#include <bits/stdc++.h>
#define LL long long
using namespace std;
vector<LL> arr{0};
inline LL read()
{
    LL r=0;
    int f=1;
    char c=getchar();
    while(c<'0'||c>'9'){
        if(c=='-')f=-1;
        c=getchar();
    }
    while(c>='0'&&c<='9'){
        r=(r<<3)+(r<<1)+(c^48);
        c=getchar();
    }
    return r*f;
}
inline void searching(LL m)
{
    LL l=0,r=arr.size(),mid;
    while(l+1!=r){
        mid=(l+r)>>1;
        if(arr[mid]<m)l=mid;
        else r=mid;
    }
    cout<<r<<"\n";
}
int main()
{
    int n;
    LL m=0;
    n=read();
    for(int i=0;i<n;i++)
    {
        m+=read();
        // cout <<m<<"\n";
        arr.push_back(m);
    }
    n=read();
    for(int i=0;i<n;i++)
    {
        m=read();
        searching(m);
    }
    return 0;
}