#include <iostream>
#include <iomanip>
#include <stdio.h>
#define LL long long
using namespace std;
int main()
{
    double a{0},b{1.0};
    int N;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        a+=b/(i+1);
    }
    cout <<"sum = "<<fixed<<setprecision(6)<<a;
    return 0;
}