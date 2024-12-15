#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a>=b&&a>=c)
    {
        if(b+c>a)
        {
            double s=(a+b+c)/2,y;
            y=sqrt(s*(s-a)*(s-b)*(s-c));
            cout <<"area = "<<fixed << setprecision(2) <<y <<"; perimeter = "
            << fixed << setprecision(2)<<a+b+c;
        }
    }
    return 0;
}