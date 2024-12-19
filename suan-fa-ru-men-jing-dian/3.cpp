//分金币
//中位数的应用
#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int maxn=1e5+7;
int C[maxn];
void solve(int n)
{
    int total=0,ans=0;
    vector<int> arr;
    int m;
    for(int i=0;i<n;++i){
        cin>>m;
        total+=m;
        arr.push_back(m);
    }
    int aver=total/n;
    C[0]=0;
    for(int i=1;i<n;i++)C[i]=C[i-1]+arr[i]-aver;
    sort(C,C+n);
    int min1=C[n/2];
    for(int i=0;i<n;i++){
        ans+=abs(min1-C[i]);
    }
    cout<<ans<<'\n';
}
int main()
{
    // ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;
    while(scanf("%d",&t)==1){
        solve(t);
    }
    return 0;
}