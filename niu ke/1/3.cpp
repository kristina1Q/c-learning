#include <iostream>
#include <stdio.h>
#include <cmath>
#define LL long long
using namespace std;
int a[400000]{};
double tell;
int m=0;
void searching(LL l,LL r)
{
    int now=0;
    for(LL i=l;i<=r;i++)
    {
        if((LL)sqrt(i)*(LL)sqrt(i)==i)
        {
            now++;
        }
    }
    a[m]=now;
    m++;
}
int main()
{
    ios::sync_with_stdio(false);
    int n;
    LL l,r;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> l >> r;
        searching(l,r);
    }   
    for(int i=0;i<n;i++)
    {
        cout << a[i] << '\n';
    }
    return 0;
}