#include <bits/stdc++.h>
using i64 =long long;
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr);
    array<int,10> arr;
    for(int i=0;i<10;++i)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),cmp);
    for(int i=0;i<3;++i)cout<<arr[i]<<'\n';
    return 0;
}