//https://www.luogu.com.cn/problem/CF1A
#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
	double n,m,a;
	cin>>n>>m>>a;
	cout<<(LL)(ceil(n/a)*ceil(m/a));
	return 0;
}