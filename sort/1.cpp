//默认升序
// less升序
// greater降序
// #include <bits/stdc++.h>
// #define LL long long
// using namespace std;
// int main()
// {
//     int a[]{9,8,7,5,6,7,3,4,2};
//     sort(a,a+9,greater<int>());
//     for(int i=0;i<9;i++){
//         cout<<a[i]<<' ';
//     }
//     return 0;
// }

//自定义排序准则
#include <bits/stdc++.h>
#define LL long long
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        arr.push_back(i);
    }
    // sort(arr.begin(),arr.end(),cmp);
    for(auto &i:arr)cout<<i<<' ';
    return 0;
}