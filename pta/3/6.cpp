#include <iostream>
using namespace std;
bool tell[600]{};
int primes[600]{};
int main()
{
    ios:: sync_with_stdio(false);
    int m,n,now=0,count=0,ans=0;
    cin >> m >> n;
    tell[1]=1;
    for(int i=2;i<=600;i++)
    {
        if(!tell[i])primes[++now]=i;
        for(int j=1;j<=now&&primes[j]*i<=600;j++)
        {
            tell[primes[j]*i]=1;
            if(i%primes[j]==0)break;
        }
    }
    for(;m<=n;m++)
    {
        if(!tell[m])
        {
            ans+=m;
            count++;
        }
    }
    cout << count << " " << ans ;
    return 0;
}