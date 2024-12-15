//https://www.luogu.com.cn/problem/P1226
#include <iostream>
#include <stdio.h>
#define LL long long 
using namespace std;
LL a,b,c,d=1,a1,b1;
int main()
{
    ios::sync_with_stdio(false);
    cin >> a >> b >> c;
    a1=a,b1=b;
    while(b!=0)
    {
        if(b&1==1)d=(d*a%c)%c;
        a=(a*a%c)%c;
        b=b>>1;
    }
    cout << a1 <<"^"<<b1<< " mod "<<c<<'='<<d;
    return 0;
}