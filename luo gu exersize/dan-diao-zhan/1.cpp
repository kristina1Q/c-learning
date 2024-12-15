//https://www.luogu.com.cn/problem/P5788
#include <bits/stdc++.h>
#define LL long long
using namespace std;
inline LL read(){
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
int main()
{
    LL n=read(),m;
    vector<LL> arr{};
    for(LL i=0;i<n;i++){
        m=read();
        
    }
    return 0;
}