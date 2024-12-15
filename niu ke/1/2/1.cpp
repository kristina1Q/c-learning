#include <iostream>
using namespace std;
int main()
{
    long long a,b,c;
    cin >> a >> b;
    if(a<b)
    {
        c=b+b-a;
        cout<< c;
    }
    else
    {
        c=a+a-b;
        cout<< c;
    }
    return 0;
}