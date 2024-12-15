//https://www.luogu.com.cn/problem/P8795
#include <bits/stdc++.h>
using namespace std;
int arr[1000010];
bool tell[1000010];
int f[1000010];
inline int get(int n)
{
    if(!tell[n])return INT_MAX;
    return n-f[n]+1;
}
int main()
{
    int now=0,mark,ans=INT_MAX,x;
    scanf("%d",&x);
    for(int i=2;i<=1000000;i++)
    {
        if(!tell[i])arr[++now]=f[i]=i;
        for(int j=1;j<=now&&arr[j]*(long long)i<=1000000;j++)
        {
            tell[arr[j]*i]=1;
            f[arr[j]*i]=max(arr[j],f[i]);
            if(i%arr[j]==0)break;
        }
    }
    //第一步：判断x是否能被小于他的某个素数整除
    mark=0;
    for(int i=get(x);i<=x;i++)
    {
        ans=min(ans,get(i));
    }
    //能找到素数的倍数
    if(ans==INT_MAX)
    {
        cout << "-1";
    }
    else
    {
        cout << ans;
    }
    return 0;
}


// #include<bits/stdc++.h>
// #define ll long long

// using namespace std;

// const int MAXN = 1000010;
// const int N = 1000000;

// int n;
// bool b[MAXN];
// int prime[MAXN], idx;
// int f[MAXN];
// int ans = INT_MAX;

// inline int get(int x){
// 	if (!b[x]) return INT_MAX;
// 	return x - f[x] + 1;
// }

// int main(){
// 	scanf("%d", &n);
// 	for (int i = 2; i <= N; ++i){
// 		if (!b[i]) prime[++idx] = f[i] = i;
// 		for (int j = 1; j <= idx && (ll) i * prime[j] <= N; ++j){
// 			b[i * prime[j]] = true;
// 			f[i * prime[j]] = max(f[i], prime[j]);
// 			if (i % prime[j] == 0) break;
// 		}
// 	}
// 	for (int i = get(n); i <= n; ++i)
// 		ans = min(ans, get(i));
// 	if (ans == INT_MAX) puts("-1");
// 	else printf("%d\n", ans);
// 	return 0;
// }