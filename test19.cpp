#include <bits/stdc++.h>
#define LL long long
using namespace std;
struct black
{
    string a;
    int b;
};
struct cmp
{
    bool operator()(black x,black y)
    {
        return x.b<y.b;
    }
};
typedef struct black black;
int main()
{
    priority_queue<black,vector<black>,cmp> big;
    black arr[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i].a>>arr[i].b;
        big.push(arr[i]);
    }
    cout<<(big.top()).a;
    return 0;
}