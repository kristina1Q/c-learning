#include <iostream>
#include <iomanip>
using namespace std;
bool tell[20000]{};
int primes[10000]{};
int main()
{
    int m,now=0,count=0;
    cin >> m;
    for(int i=2;i<=m;i++)
    {
        if(!tell[i])primes[++now]=i;
        for(int j=1;j<=now&&primes[j]*i<=m;j++)
        {
            tell[primes[j]*i]=1;
            if(i%primes[j]==0)break;
        }
    }
    for(int i=m-1;i>0;--i)
    {
        if(!tell[i])
        {
            count++;
            cout <<setw(6)<<i;
        }
        if(count==10)break;
    }
    return 0;
}