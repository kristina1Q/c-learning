#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL n,y,k;
    cin >>y>>n>>k;
    if(y>0){
        if(n<-k){
           cout<<3*y-2*n; 
        }
        else if(-k<=n&&n<0){
            cout<<y-2*n;
        }
        else if(0<=n&&n<=y){
            cout<<y;
        }
        else{
            cout<<2*n-y;
        } 
    }
    else if(y<0){
        if(n>k){
            cout<<2*n-3*y;
        }
        else if(0<n&&n<=k){
            cout<<2*n-y;
        }
        else if(y<=n&&n<=0){
            cout<<-y;
        }
        else
        {
            cout<<y-2*n;
        }
        
    }
    else if(y==0){
        if(n<0)n=-n;
        cout<<2*n;
    }
    return 0;
}