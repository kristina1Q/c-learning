//将带排的插到之前的有序队中
#include <bits/stdc++.h>
using namespace std;
using i64=long long;
int main()
{
    vector<int> arr{1,9,5,4,3,2,3,6,7};
    for(int i=1,j;i<arr.size();++i)
    {
        int wait=arr[i];
        for(j=i-1;j>=0&&arr[j]>wait;--j)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=wait;
    }
    for(auto &i:arr)cout<<i<<' ';
    return 0;
}