#include <bits/stdc++.h>
#define LL long long
using namespace std;
vector<LL> arr(70);
LL m;
int mid;
inline LL read(){
    LL r=0;
    char c=getchar();
    while(c>='0'&&c<='9'){
        r=(r<<3)+(r<<1)+(c^48);
        c=getchar();
    }
    return r;
}
inline LL searching(LL d)
{
    int l=-1,r=70;
    while(l+1!=r){
        mid=(l+r)>>1;
        if(arr[mid]<=d)l=mid;
        else r=mid;
    }
    return arr[l];
}
inline void solve()
{
    bool mark1=0,mark2=0,mark3=0,tell=0;
    LL a=0,b=0,c=0,x=0,y=0,z=0;
    LL e=m;
    int l=-1,r=70,mid0=(l+r)>>1;
    while(l+1!=r)
    {
    mark1=0;
    a=searching(mid0);
    m-=a;
    if(m>=0)
    {
        int nl=-1,nr=70,mid1,f=m,g=m;
        mid1=(nl+nr)>>1;
        while(nl+1!=nr){
        b=searching(mid1);
        f-=b;
        if(f>=0){
        int hl=-1,hr=70,mid2;
        mid2=(nl+nr)>>1;
            while(hl+1!=hr){
                mark3=0;
                c=searching(mid2);
                if(a+b+c==e)
    {
        tell=1;
        if(a>x){
            x=a;
            y=b;
            z=c;
        }
        else if(a==x){
            if(b>y){
                y=b;
                z=c;
            }
            else if(b==y){
                if(c>z)z=c;
            }
        }
        mark1=1;
    }
            if(a+b+c<e)hl=mid2;
            else hr=mid2;
            mid2=(hl+hr)>>1;
            }
        } 
    if(a+b+c<e)nl=mid1;
    else nr=mid1;
    mid1=(nl+nr)>>1;
    f=g;
        }    
    }
    m=e;
    if(a+b+c<e)l=mid0;
    else r=mid0;
    mid0=(l+r)>>1;
    }
    if(tell){
        if(x>=y&&x>=z){
            if(y>z)cout<<x<<" "<<y<<" "<<z<<"\n";
            else cout<<x<<" "<<z<<" "<<y<<"\n";
        }
        else if(y>=x&&y>=z){
            if(x>z)cout<<y<<" "<<x<<" "<<z<<"\n";
            else cout<<y<<" "<<z<<" "<<x<<"\n";
        }
        else if(z>=y&&z>=x){
            if(x>y)cout<<z<<" "<<x<<" "<<y<<"\n";
            else cout<<z<<" "<<y<<" "<<x<<"\n";
        }
    }
    else cout<<"-1\n";
}
int main()
{
    LL q;
    arr[0]=0;
    arr[1]=arr[2]=1;
    for(int i=3;i<70;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    q=read();
    for(LL i=0;i<q;i++){
        m=read();
        solve();
    }
    return 0;
}