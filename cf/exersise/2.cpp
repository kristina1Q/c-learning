//https://codeforces.com/problemset/problem/2041/B
#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL a,b,ans;
    int t;
    cin >>t;
    while(t--)
    {
        ans=0;
        cin >>a>>b;
        for(;ans*(ans+1)/2<=a+b;ans++){}
        cout <<--ans<<"\n";
    }
    return 0;
}