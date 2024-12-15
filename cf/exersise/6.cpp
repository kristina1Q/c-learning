//https://codeforces.com/problemset/problem/2038/C
//排序统计数量，每2个就算一次
//最大值：第一个-倒数第二个，第二个-倒数第一个
#include <bits/stdc++.h>
#include <stdio.h>
#define LL long long
using namespace std;
LL m;
inline LL read()
{
    LL r=0;
    int f=1;
    char c=getchar();
    while(c<'0'||c>'9'){
        if(c=='-')f=-1;
        c=getchar();
    }
    while(c>='0'&&c<='9'){
        r=(r<<3)+(r<<1)+(c^48);
        c=getchar();
    }
    return r*f;
}
inline void solve()
{
    m=read();
    vector<LL> arr(m);
    vector<LL> arr1{};
    for(LL i=0;i<m;i++){
        arr[i]=read();
    }
    sort(arr.begin(),arr.end());
    for(LL i=1;i<arr.size();i++){
        if(arr[i-1]==arr[i]){
            arr1.push_back(arr[i]);
            i++;
        }
    }
    if(arr1.size()<4){
        cout<<"NO\n";
        return ;
    }
    else{
        cout<<"YES\n";
        cout<<arr1[0]<<" "<<arr1[1]<<" "<<arr1[0]<<" "<<arr1[arr1.size()-1]<<" "<<arr1[arr1.size()-2]<<" "<<arr1[1]<<" "<<arr1[arr1.size()-2]<<" "<<arr1[arr1.size()-1]<<"\n";
    }
}
int main()
{
    LL n;
    n=read();
    for(int i=0;i<n;i++){
        solve();
    }
    return 0;
}