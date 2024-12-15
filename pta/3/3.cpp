#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    double x=0,a=1;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        x+=a*1/(1+3*(i-1));
        a=-a;
    }
    cout << "sum = "<<fixed << setprecision(3)<<x;
    return 0;
}