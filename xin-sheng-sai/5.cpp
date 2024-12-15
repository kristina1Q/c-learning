#include <bits/stdc++.h>
#define LL long long
using namespace std;
LL m,max1=0,min1;
inline LL read(){
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
    LL n,temp,max1=0;
    n=read();
    if(n==0){
        cout<<0;
        return 0;
    }
    vector<LL> arr(n);
    LL r=n-1;
    stack<LL> stk;
    for(LL i=0;i<n;i++)
    {
        arr[i]=read();
    }
    for(LL i=0;i<n;i++)
    {
        if(!stk.size())stk.push(i);
        else{
            if(arr[i]>=arr[stk.top()])stk.push(i);
            else{
                while(stk.size()>=2&&arr[i]<arr[stk.top()]){
                    temp=stk.top();
                    stk.pop();
                    max1=max(max1,arr[temp]*(i-stk.top()-1));
                }
                if(arr[i]<arr[stk.top()]){
                    max1=max(max1,arr[stk.top()] * i);
                    stk.pop();
                }
                stk.push(i);
            }
        }
    }
    while(stk.size()>=2){
        temp=stk.top();
        stk.pop();
        max1=max(max1,arr[temp]*(r-stk.top()));
    }
    if(stk.size()){
        max1=max(max1,arr[stk.top()]*n);
    }
    cout<<max1;
    return 0;
}