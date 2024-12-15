//https://codeforces.com/problemset/problem/2045/C
#include <bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    bool mark=0;
    LL mark1=500000;
    string arr1;
    string arr2;
    string arr6;
    vector<LL>arr3(26,-1); //arr2的每个字母距离末尾最近的下标
    cin>>arr1>>arr2;
    for(LL i=arr2.size()-2;i>=0;--i)
    {
        if(i>arr3[arr2[i]-'a'])arr3[arr2[i]-'a']=i;
    }
    for(LL i=1;i<arr1.size();i++){
        if(i>=mark1)break;
        if(arr3[arr1[i]-'a']>=0&&(i+arr2.size()-arr3[arr1[i]-'a']<mark1)){
            mark=1;
            string arr4(arr1,0,i);
            string arr5(arr2,arr3[arr1[i]-'a']);
            // cout<<arr4<<" ";
            // cout<<arr5<<"\n";
            arr6=arr4+arr5;
            mark1=arr6.size();
        }
    }
    if(mark)cout<<arr6;
    else cout<<"-1";
    return 0;
}