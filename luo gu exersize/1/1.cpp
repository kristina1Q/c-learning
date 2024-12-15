#include <iostream>
using namespace std;
int max (int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int type,a,b,c,d;
    cin >> type >> a >> b >> c >> d;
    if(type==0)
    {
        int y=a+b;
        cout << y;
    }
    else
    {
        int y=max(a-c,0)+max(b-d,0);
        cout << y;
    }
    return 0;
}