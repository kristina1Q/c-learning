#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    bool mark=0;
    LL i;
    string arr;
    cin>>arr;
    if(arr[0]==arr[arr.size()-1]){
        cout<<0;
    }
    else{
        for(i=0;i<arr.size()-1;i++){
        if(arr[i]==arr[i+1]){
            mark=1;
            break;
        }
    }
    if(mark)cout<<i+1;
    else cout<<-1;
    }
    return 0;
}