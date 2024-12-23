//https://atcoder.jp/contests/abc385/tasks/abc385_a
#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b&&b==c){
        cout<<"Yes";
        return 0;
    }
    else if(a+b==c||a+c==b||b+c==a){
        cout<<"Yes";
        return 0;
    }
    cout<<"No";
    return 0;
}