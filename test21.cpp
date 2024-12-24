#include<stdio.h>
typedef long long int i64;
int main(void)
{
	i64 n,k;
	scanf("%ld %ld",&n,&k);
	i64 ans=0;
	if(k*2==n)
	{
		ans=n;
	}
	else
	{
		int min;
		if(k>n-k)
		{
			min=n-k;
		}
		else
		{
			min=k;
		}
		ans=n*min+1;
	}
	printf("%ld\n",ans);
	return 0;
 }  