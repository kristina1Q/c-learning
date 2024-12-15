//https://codeforces.com/problemset/problem/2038/L
#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=n/2;
    int x=n-2*a;
    int b=(n-x)/2;
    int z=n-2*b-x;
    int c=(n-b-2*z)/3;
    if(c*3<n-b-2*z)c+=1;
    cout<<a+b+c+x+z;
    return 0;
}