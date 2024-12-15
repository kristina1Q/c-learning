//https://codeforces.com/problemset/problem/2041/E
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int a,b;
    cin >>a >>b;
    double x=b-1,y=b,z=3*a-2*b+1;
    while(z<=y)
    {
        --x;
        ++z;
    }
    cout <<"3\n"<<x<<" "<<y<<" "<<z;
    return 0;
}