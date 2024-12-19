//https://ac.nowcoder.com/acm/contest/98528/D
#include <bits/stdc++.h>
#define LL long long
using namespace std;
void sovle()
{
    int n,m,a,b;
    cin>>n>>m;
    vector<int> arr;
    vector<int> arr1;
    vector<int> arr2;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0;i<m;i++){
        cin>>a>>b;
        if(a==1||b==1)arr[0]+=3;
        else{
            arr1.push_back(a);
            arr2.push_back(b);
        }
    }
    int res=arr[0];
    for(int i=0;i<arr1.size();++i){
        if(arr[arr1[i]-1]>arr[0])arr[arr1[i]-1]+=1;
        else if(arr[arr2[i]-1]>arr[0])arr[arr2[i]-1]+=1;
        else{
            if(arr[arr1[i]-1]+3<=arr[arr2[i]-1]+1)arr[arr1[i]-1]+=3;
            else if(arr[arr2[i]-1]+3<=arr[arr1[i]-1]+1)arr[arr2[i]-1]+=3;
            else{
                arr[arr1[i]-1]++;
                arr[arr2[i]-1]++;
            }
        }
    }
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i=0;i<arr.size();++i){
        if(arr[i]==res){
        cout<<i+1<<'\n';
        return;
    }
    }
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        sovle();
    }
    return 0;
}