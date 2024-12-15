#include <iostream>
int main()
{
    using namespace std;
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a>=85&&d>=85&&b>=55&&c>=55&&(a+b+c+d)>=305)
    {
        if(a+b+c+d>=370)
        {
            cout<< "A";
        }
        else
        {
            cout<< "B";
        }
    }
    else
    {
        cout << "C";
    }
    return 0;
}