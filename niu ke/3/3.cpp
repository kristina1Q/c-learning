// https://ac.nowcoder.com/acm/contest/97439/C
//四周上的数无法改变，因此就是让里面的数都变为0
#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    bool tell=1;
    int n,min1,min2,min3,max1,max2,max3;
    cin>>n;
    vector<vector<LL>> arr(n+2,vector<LL>(n+2));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((arr[i][j]<0)&&arr[i][j]<arr[i-1][j]&&arr[i][j]<arr[i+1][j]&&arr[i][j]<arr[i][j-1]&&arr[i][j]<arr[i][j+1]){
            min1=min(arr[i-1][j],arr[i+1][j]);
            min2=min(arr[i][j-1],arr[i][j+1]);
            min3=min(min1,min2);
            if(min3>=0)arr[i][j]=0;
            }
            if((arr[i][j]>0)&&arr[i][j]>arr[i-1][j]&&arr[i][j]>arr[i+1][j]&&arr[i][j]>arr[i][j-1]&&arr[i][j]>arr[i][j+1]){ 
            max1=max(arr[i-1][j],arr[i+1][j]);
            max2=max(arr[i][j-1],arr[i][j+1]);
            max3=max(max1,max2);
            if(max3<=0)arr[i][j]=0;
            }
            if(arr[i][j]!=0){
                tell=0;
                goto mark;
            }
        }
    }
    mark:
    if(tell)cout<<"YES";
    else cout<<"NO";
    return 0;
}