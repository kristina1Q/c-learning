//https://ac.nowcoder.com/acm/contest/97439/A
#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL a,b,c,d,mark1=0,mark2=0,r=1; //0为偶数
    cin >>a>>b>>c>>d;
    if(c==0){
        if(d%2==0)cout<<"NO";
        else cout<<"YES";
    }
    else if(c!=0&&b==0)
    {
        if((c+d)%2==0)cout<<"NO";
        else cout<<"YES";
    }
    else{
                 if(d%2!=0){
        mark2=1;
    }
    // cout <<r<<"\n";
    if(c%2==0)mark1=0;
    else{
        if(a%2==0)mark1=0;
        else mark1=1;
    }
    // cout <<mark1<<" "<<mark2;
    if(mark1==1&&mark2==1)cout<<"NO";
    else if(mark1==0&&mark2==0)cout<<"NO";
    else cout<<"YES";
    }
   
    return 0;
}