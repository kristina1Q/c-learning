//https://ac.nowcoder.com/acm/contest/97439/B
#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,m=0;
    cin >>n;
    if(n==1)cout<<1;
    else 
    {
        int j;
        vector<vector<LL>> arr(n,vector<LL>(n));
        for(int i=0;i<n;i++){
        arr[0][i]=i+1;
        }
        for(int i=0;i<n;i++){
        cout<<arr[0][i]<<" ";
        }
        cout<<"\n";
        for(int i=1;i<n;i++){
            for(j=0;j<i;j++){
                arr[i][j]=arr[j][m];
            }
            for(int c=arr[i-1][n-1];j<n;j++){
                c++;
                arr[i][j]=c;
            }
            m++;
            for(int c=0;c<n;c++){
                cout<<arr[i][c]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}