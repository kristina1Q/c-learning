//https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/1/ALDS1_1_A
#include <bits/stdc++.h>
using namespace std;
using i64=long long;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n,m;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;++i)
    {
        cin>>m;
        arr.push_back(m);
    }
    for(int i=0;i<n;++i)
    {
        if(i!=n-1)
        cout<<arr[i]<<' ';
    }
    cout<<arr[n-1];
    cout<<'\n';
    for(int i=1,j;i<arr.size();++i)
    {
        int wait=arr[i];
        for(j=i-1;j>=0&&arr[j]>wait;--j)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=wait;
        for(int i=0;i<n;++i)
    {
        if(i!=n-1)
        cout<<arr[i]<<' ';
    }
    cout<<arr[n-1];
    cout<<'\n';
    }
    return 0;
}