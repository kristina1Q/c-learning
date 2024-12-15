//https://codeforces.com/problemset/problem/2038/A
#include <bits/stdc++.h>
#define LL long long
using namespace std;
inline LL read()
{
    LL r=0;
    char c=getchar();
    while(c>='0'&&c<='9'){
        r=(r<<3)+(r<<1)+(c^48);
        c=getchar();
    }
    return r;
}
int main()
{
    bool mark1=0;
    LL n,k,max1=0;
    n=read();
    k=read();
    vector<LL> arr1(n); //ai
    vector<LL> arr2(n); //bi
    vector<LL> arr3(n,0);
    for(LL i=0;i<n;i++)arr1[i]=read();
    for(LL i=0;i<n;i++)arr2[i]=read();
    for(LL i=0;i<n;i++)
    {
        max1+=arr1[i]/arr2[i];
        if(max1>=k){
            mark1=1;
            break;
        }
    }
    max1=0;
    if(mark1){
        for(LL i=n-1;i>=0;--i){
            while(max1<k&&arr3[i]<(arr1[i]/arr2[i])){
                max1++;
                arr3[i]++;
            }
            if(max1>=k)break;
        }
        for(LL i=0;i<n;i++){
            cout<<arr3[i]<<" ";
        }
    }
    else{
        for(LL i=0;i<n;i++){
            cout<<"0 ";
        }
    }
    return 0;
}