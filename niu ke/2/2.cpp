//https://ac.nowcoder.com/acm/contest/98241/B
#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    LL n,m,max1=0,min1=10000000000;
    vector<LL> arr{};
    cin>>n;
    for(LL i=0;i<n;i++){
        cin>>m;
        if(m>max1)max1=m;
        if(m<min1)min1=m;
        arr.push_back(m);
    }
    if((max1-min1)%2!=0){
        cout<<max1-min1<<' ';
        cout<<min1+((max1-min1)>>1)+1;
    }
    else{
        cout<<max1-min1<<' ';
        cout<<min1+((max1-min1)>>1);
    }
    return 0;
}