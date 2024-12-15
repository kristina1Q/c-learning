右箭头都是大于，也就是右边的更大

// priority_queue的升序排列如下
// #include <bits/stdc++.h>
// #define LL long long
// using namespace std;
// struct cmp
// {
//     bool operator()(int a,int b){
//         return a<b; 
//     }
// };
// int main()
// {
//     priority_queue<int,vector<int>,cmp> arr;
//     arr.push(1);
//     arr.push(2);
//     arr.push(3);
//     cout<<arr.top();
//     return 0;
// }



// sort的升序排列如下
#include <bits/stdc++.h>
#define LL long long
using namespace std;
int cmp(int a,int b){
    return a<b;
}
int main()
{
    int a[]{4,5,3,2,1,3,5,7,6};
    sort(a,a+sizeof(a)/sizeof(a[0]),cmp);
    for(int i=0;i<9;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}