#include <bits/stdc++.h>
#define LL long long
using namespace std;
int total2(int n)
{
    int a=2,r=1;
    while(n!=0){
        r*=a;
        if(n&1)a*=a;
        n>>=1;
    }
    return r;
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;
    vector <int>arr;
    cin>>n;
    int m=total2(n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i>>j&1)arr.push_back(1);
            else arr.push_back(0);
        }
        for(auto &i:arr)cout<<i<<' ';
        cout<<'\n';
        arr.clear();










































        












        











        










        
    }
    return 0;
}