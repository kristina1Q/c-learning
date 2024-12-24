//https://ac.nowcoder.com/acm/contest/98528/M
#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL n,k;
	cin >> n >>k;
	LL ans=0;
	if(k*2==n)
	{
		cout<<n;
        return 0;
	}
	else
	{
		if(k>n-k)k=n-k;
		ans=n*k+1;
	}
	cout <<ans;
    return 0;
}