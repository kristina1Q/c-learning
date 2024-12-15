#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N=1e5+10;
int primes[N];
bool tell[N];
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int a,now=0;
    int ans=0;
    cin>>a;
    for(int i=2;i<=a;i++){
        if(!tell[i]){
            ans++;
            primes[++now]=i;
            }
        for(int j=0;j<=now&&primes[j]*i<=a;j++){
            tell[primes[j]*i]=1;
        }
    }
    cout<<ans;
    return 0;
}