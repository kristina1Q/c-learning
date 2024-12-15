// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,n,r=1;
//     while(n!=0)
//     {
//         if(n&1==1)r*=a;
//         a*=a;
//         n>>1;
//     }
//     cout << r;
//     return 0;
// }


#include <iostream>
#define LL long long
using namespace std;
bool tell[1000]{};
int primes[1000]{};
int main()
{
    int n,ans=0,now=0;
    cin >>n;
    for(int i=2;i<=n;i++)
    {
        if(!tell[i]){primes[++now]=i;ans++;}
        for(int j=1;j<=now&&primes[j]*i<=n;j++)
        {
            tell[primes[j]*i]=1;
            if(i%primes[j]==0)break;
        }
    }
    cout <<ans;
    return 0;
}