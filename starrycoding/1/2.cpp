#include <iostream>
#include <vector>
using namespace std;
const int maxn=100010;
bool tell[maxn];
int primes[maxn];
int main()
{
    ios::sync_with_stdio(false);
    vector<long> arr1{};
    long n,m;
    cin >> n;
    long now=0;
    for(long i=2;i<=maxn;i++)
    {
        if(!tell[i])primes[++now]=i;
        for(int j=1;j<=now&&primes[j]*i<=maxn;j++)
        {
            tell[primes[j]*i]=1;
            if(i%primes[j]==0)break;
        }
    }
        for(int i=0;i<n;i++)
        {
            cin >> m;
            arr1.push_back(m);
            if(tell[m])arr1.pop_back();
        }
        for(int i=0;i<arr1.size();i++)
        {
            cout << arr1[i] << " ";
        }
    return 0;
}