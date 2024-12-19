#include <bits/stdc++.h>
#define LL long long
using namespace std;
int q=1;
bool cmp(pair<int,int>a,pair<int,int>b)
{
    return a.second>b.second;
}
void solve(int n)
{
    int ans=0,max1=0;
    vector<int> rem;
    pair<int,int> arr[n];
    for(int i=0;i<n;++i){
        scanf("%d%d",&arr[i].first,&arr[i].second);
    }
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++){
        ans+=arr[i].first;
        // cout<<arr[i].first<<'\n';
        rem.push_back(arr[i].second);
        if(i>=1&&i<=n-1)for(int j=0;j<rem.size()&&rem[j]>0;++j)rem[j]-=arr[i].first;
    }
    rem.push_back(arr[n].second);
    for(auto &i:rem){
        if(i>max1)max1=i;
    }
    if(max1){
        cout<<"Case "<<q<<": "<<ans+max1<<'\n';
        return;
    }
    cout<<"Case "<<q<<": "<<ans<<'\n';
        return;
}
int main()
{
    // ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        solve(n);
        q++;
    }
    return 0;
}