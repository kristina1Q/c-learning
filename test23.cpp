//https://www.luogu.com.cn/problem/CF1B
#include <bits/stdc++.h>
#define LL long long
using namespace std;
void excel(string s)
{
    LL i=0,ans=0;
    while(s[i]<'0'||s[i]>'9')i++;
    LL l=i;
    while(s[i]>='0'&&s[i]<='9')i++;
    LL len=i-l;
    string res(s,l,len);
    for(LL j=s.size()-1;j>i;--j)
    {
        ans+=(ans<<3)+(ans<<1)+(s[j]^48);
    }
    for(int i=0;i<10;++i)
    {
        if(ans>=pow(26,i)&&ans<=pow(26,i+1))
        {
            
        }
    }
}
void rxcy(string s)
{

}
void solve()
{
    string s;
    cin>>s;
    LL i=0;
    while(s[i]<'0'||s[i]>'9')i++;
    for(;i<s.size();++i)if(s[i]<'0'||s[i]>'9'){
        excel(s);
        return;
    }
    rxcy(s);
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    LL t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}