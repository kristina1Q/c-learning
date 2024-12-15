#include <bits/stdc++.h>
#define LL long long
using namespace std;
struct cmp
{
    bool operator()(int a,int b){
        return a<b;
    }
};
int main()
{
    priority_queue<int,vector<int>,cmp> arr;
    arr.push(1);
    arr.push(2);
    arr.push(3);
    cout<<arr.top();
    return 0;
}