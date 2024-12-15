//最小公倍数=原两数之积/最大公约数
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >>b;
    int d=b,e=a;
    while(a%b!=0)
    {
        c=a%b;
        a=b;
        b=c;
    }
    cout <<d*a/b;
    return 0;
}