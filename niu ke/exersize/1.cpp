//https://ac.nowcoder.com/acm/contest/22904/1001
#include <bits/stdc++.h>
#define LL long long
using namespace std;
inline LL read()
{
    LL r=0;
    char c=getchar();
    while(c<'0'&&c>'9')c=getchar();
    while(c>='0'&&c<='9'){
        r=(r<<3)+(r<<1)+(c^48);
        c=getchar();
    }
    return r;
}
int main()
{
    int n;
    LL m,ans=0,now;
    n=read();
    if(n==1){
        int d=read();
        cout<<0;
        return 0;
    }
    vector<LL> arr{};
    vector<LL> temp{};
    for(int i=0;i<n;i++)
    {   
        m=read();
        arr.push_back(m);
    }
    sort(arr.begin(),arr.end());
    for(;;){
        if(arr.size()==1||temp.size()==1)break;
        if(arr.size()>1){
            if(arr.size()%2!=0)temp.push_back(arr.back());
            for(int i=0;i<arr.size();i+=2){
                if(i==arr.size()-1)break;
                now=arr[i]+arr[i+1];
                ans+=now;
                temp.push_back(now);
            }
            arr.clear();
            sort(temp.begin(),temp.end());
        }
        if(temp.size()>1){
            if(temp.size()%2!=0)arr.push_back(temp.back());
            for(int i=0;i<temp.size();i+=2){
                if(i==temp.size()-1)break;
                now=temp[i]+temp[i+1];
                ans+=now;
                arr.push_back(now);
            }
            temp.clear();
            sort(arr.begin(),arr.end());
        }

    }
    cout<<ans;
    return 0;
}