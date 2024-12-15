//https://ac.nowcoder.com/acm/contest/98241/A
#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL n,a,b,c;
    cin>>n>>a>>b>>c;
    if(n<10){
        cout<<0;
        return 0;
    }
    LL x=n/a;
    LL y=(n-a*x)/b;
    LL z=(n-a*x-b*y)/c;
    cout<<x+y+z;
    return 0;
}