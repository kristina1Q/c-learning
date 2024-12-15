#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    int a;
    cin >> a;
    if(a>=100&&a<=999)
    {
        int b,c,d;
        b=a%10;
        c=a/10%10;
        d=a/100;
        if(pow(b,3)+pow(c,3)+pow(d,3)==a)
        {
            cout << "yes";
        }
        else
        {
            cout << "no";
        }
    }
    else
    {
        cout << "error";
    }
    return 0;
}