#include <iostream>
#define  LL long long
using namespace std;
LL arr1[45000]{};
int result[10010]{};
int searching()
{
    LL l,r,mid;
    cin >> l >> r;
    r=r-(l-1);
    int left=1,right=45000;
    while(left+1!=right)
    {
        mid=(left+right)/2;
        if(arr1[mid]<r)left=mid;
        else if(arr1[mid]>r)right=mid;
        else if(arr1[mid]==r)return mid;
    }
    return left;
}
int main()
{
    ios::sync_with_stdio(false);
    LL m=1,n=1;
    for(long i=1;i<=45000;i++)
    {
        arr1[i]=m;
        m+=n;
        n++;
    }
    int t;
    cin >>t;
    for(long i=0;i<t;i++)
    {
        result[i]=searching();
    }
    for(long i=0;i<t;i++)
    {
        cout << result[i]<<"\n";
    }
    return 0;
}