//https://codeforces.com/problemset/problem/2041/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6]{};
    int b;
    for(int i=0;i<4;i++)
    {
        cin >>b;
        a[b]++;
    }
    for(int i=1;i<=5;i++)
    {
        if(!a[i])
        {
            cout<<i;break;
        }
    }
    return 0;
}