//归并排序
#include <bits/stdc++.h>
#define LL long long
using namespace std;
LL n;
LL read()
{
    LL r=0;
    char c=getchar();
    while(c>'9'||c<'0')c=getchar();
    while(c>='0'&&c<='9')
    {
        r=(r<<3)+(r<<1)+(c^48);
        c=getchar();
    }
    return r;
}
void merge(vector<LL> &arr,LL left,LL right)
{
    if(left>=right)return;
    LL mid=(left+right)>>1;
    merge(arr,left,mid);
    merge(arr,mid+1,right);
    vector<LL> temp(n,0);
    LL lmark=left,rmark=mid+1,mark=left;
    while(lmark<=mid&&rmark<=right)
    {
        if(arr[lmark]<arr[rmark])temp[mark++]=arr[lmark++];
        else temp[mark++]=arr[rmark++];
    }
    while(lmark<=mid)temp[mark++]=arr[lmark++];
    while(rmark<=right)temp[mark++]=arr[rmark++];
    while(left<=right)
    {
        arr[left]=temp[left];
        left++;
    }
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    LL m;
    cin>>n;
    vector<LL> arr(n);
    for(LL i=0;i<n;++i)
    {
        arr[i]=read();
    }
    merge(arr,0,n-1);
    for(auto &i:arr)cout<<i<<' ';
    return 0;
}