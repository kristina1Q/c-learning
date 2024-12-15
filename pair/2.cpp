#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    pair<int,string> arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    cout<<arr[0].first<<' '<<arr[0].second;
    return 0;
}