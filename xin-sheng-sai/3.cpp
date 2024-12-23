#include <bits/stdc++.h>
#define LL long long
using namespace std;
void solve()
{
    LL n,m,d;
    cin>>n;
    vector<LL> arr(n);
    vector<LL> arr1{};
    for(LL i=0;i<n;i++)
        cin>>arr[i];
    }
    for(LL i=0;i<n;i++){
        for(LL j=i+1;j<n;j++){
            m=arr[i]+arr[j];
            if(!arr1.size())arr1.push_back(m);
            else{
                LL l=-1,r=arr1.size(),mid;
                while(l+1!=r){
                    mid=(l+r)>>1;
                    if(arr1[mid]<m)l=mid;
                    else r=mid;
                }
                arr1.insert(arr1.begin()+r,m);
            }
        }
    }
    LL mark=0;
    LL k;
    cin>>k;
    // for(auto i:arr1)cout<<i<<" ";
    cout<<arr1[k-1]<<"\n";
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}