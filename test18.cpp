//https://www.luogu.com.cn/problem/P1111
#include <bits/stdc++.h>
#define LL long long
using namespace std;
struct black
{
    int a;
    int b;
    LL t;
};
bool cmp(struct black a,struct black b)
{
    return a.t<b.t;
}
vector<int> arr(1010);
int rank1[1010];
int root(int a)
{
    return arr[a]==a?a:root(arr[a]);
}
void merge(int x,int y)
{
    x=root(x),y=root(y);
    if(x==y)return;
    if(rank1[x]>rank1[y])swap(x,y);
    arr[x]=y;
    if(rank1[x]==rank1[y])rank1[y]++;
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    bool mark;
    int n,a,b,r;
    LL m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)arr[i]=i;
    const int N =m;
    struct black cross[N];
    for(LL i=0;i<m;i++){
        cin>>cross[i].a>>cross[i].b>>cross[i].t;
    }
    sort(cross,cross+N,cmp);
    // cout<<cross[0].t;
    for(LL i=0;i<m;i++)
    {
        mark=1;
        merge(cross[i].a,cross[i].b);
        r=root(cross[i].a);
        for(int i=1;i<=n;i++){
            if(r!=root(i)){
                mark=0;
                break;
            }
        }
        if(mark){
            cout<<cross[i].t;
            break;
        }
    }
    if(!mark)cout<<"-1";
    return 0;
}