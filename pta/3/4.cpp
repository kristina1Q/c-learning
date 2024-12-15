#include <iostream>
#include <cmath>
using namespace std;
bool tell(int n)
{
    if(n<=1)return false;
    int a=sqrt(n);
    for(int i=2;i<=a;i++)
    {
        if(n%i==0)return false;
    }
    return true ;
}
int main()
{
    int n;
    cin >> n;
    if(tell(n))cout <<n<<" is a prime.";
    else cout <<n<<" is not a prime.";
    return 0;
}