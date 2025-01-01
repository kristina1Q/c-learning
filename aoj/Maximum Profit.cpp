//https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/1/ALDS1_1_D
// #include <bits/stdc++.h>
// using namespace std;
// using i64=long long;
// int main()
// {
//     ios::sync_with_stdio(false),cin.tie(nullptr);
//     vector<i64> arr;
//     i64 n,m;
//     cin>>n;
//     for(i64 i=0;i<n;++i)
//     {
//         cin>>m;
//         arr.push_back(m);
//     }
//     i64 max1=arr[n-1];
//     vector<i64> profit(n,0);
//     for(i64 i=n-1;i>=0;--i)
//     {
//         profit[i]=max1;
//         if(arr[i]>max1)max1=arr[i];
//     }
//     i64 max2=arr[1]-arr[0];   //最好不要自己设初值，不然可能有错，如：只有2个数：1000000 1
//     for(int i=0;i<n-1;++i)
//     {
//         if(profit[i]-arr[i]>max2)max2=profit[i]-arr[i];
//     }
//     cout<<max2<<'\n';
//     return 0;
// }


//优化版
#include <bits/stdc++.h>
using namespace std;
using i64=long long;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr);
    i64 n,m;
    cin>>n;
    vector<i64> arr;
    for(int i=0;i<n;++i)
    {
        cin>>m;
        arr.push_back(m);
    }
    i64 maxv=-2000000000;
    i64 minv=arr[0];
    for(int i=1;i<n;++i)
    {
        maxv=max(maxv,arr[i]-minv);
        minv=min(minv,arr[i]);
    }
    cout<<maxv<<'\n';
    return 0;
}