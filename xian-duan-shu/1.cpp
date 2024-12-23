//但是，对于OI正式选手来说，线段树不是算法，应该是一种工具。她能把一些对于区间（或者线段）的修
//改、维护，从O(N)的时间复杂度变成O（logN）。

//节点i 的左儿子i*2+1，右儿子i*2+2，父亲（i-1）/2
#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int N =1e5+7;
void treeinsert(int a[],int pos,int n,int l,int r)
{
    a[pos]++;
    if(n==r&&n==l)return;
    int mid=(l+r)/2;
    int lchild=mid*2+1;
    int rchild=mid*2+2;
    if(n<=mid)treeinsert(a,lchild,n,l,mid);
    else treeinsert(a,rchild,n,mid+1,r);

}
void treeprint(int a[],int pos,int n,int l,int r)
{
    printf("[%d,%d] : %d\n",l,r,a[pos]);
    if(l==r)return;
    int mid=(l+r)/2;
    int lchild=mid*2+1;
    int rchild=mid*2+2;
    if(n<=mid)treeprint(a,lchild,n,l,mid);
    else treeprint(a,rchild,n,mid+1,r);
}
int main()
{
    int a[N];
    treeinsert(a,0,5,0,5);
    treeprint(a,0,3,0,5);
    return 0;
}