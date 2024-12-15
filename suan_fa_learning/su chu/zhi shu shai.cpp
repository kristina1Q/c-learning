//1:纯暴力(2~n或者2~根号n)
// for(int i=2;i<n;i++) int i=2;i<=根号n;i++
// {
//     if(cout%i==0) 
//     {
//         不是;
//     }
//     else 是
// }


//2.朴素筛
// #include <iostream>
// using namespace std;
// int main()
// {
//     int 
//     return 0;
// }


//欧拉筛，最强
#include <iostream>
int pri[10000]{0};
bool primes[10000]{0};
int main()
{
    using namespace std;
    int n,ans=0,now=0;
    cin >> n;
    for(int i=2;i<=n;i++)
    {
        if(!primes[i])
        {
        pri[++now]=i;
        }
        for(int j=1;j<=now&&pri[j]*i<=n;j++)
        {
            primes[pri[j]*i]=1;
            if(i%pri[j]==0)break;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(!primes[i])ans++;
    }
    cout <<ans;
    return 0;
}