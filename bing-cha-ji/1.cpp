//并查集-解决连通块问题
//能快速实现2个连通块的合并，也能快速知道哪些点是联通的
//初始化pre[]数组，使每个元素指向它的根
//合并只在跟上，查询只在跟上
//朴素版
//https://www.luogu.com.cn/problem/P3367
#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int maxn=1e5+10;
int arr[maxn];
inline LL root(LL a)
{
    if(arr[a]==a)return a;
    else return arr[a]=root(arr[a]);
    // return arr[a]==a?a:root(arr[a]);  简短版提升效率
}
inline void merge(LL b,LL c)
{
    b=root(b),c=root(c);
    if(b==c)return;
    arr[b]=c;
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    LL n,m,a,b,c;
    cin >>n>>m;
    for(int i=1;i<=n;i++){
        arr[i]=i;
    }
    for(int i=0;i<m;i++)
    {   
        cin>>a>>b>>c;
        if(a==1)merge(b,c);
        else cout<<(root(b)==root(c)?'Y':'N')<<"\n";
    }
    return 0;
}

//路径压缩
//只需加上 return arr[a]=(arr[a]==a?a:root(arr[a])); 递归形式
//循环形式
int root(int x)
{
    int res=x;
    while(arr[res]!=res)res=arr[res];
    while(arr[x]!=x){
        int y=x;
        x=arr[x];
        arr[y]=res;
    }
    return res;
}

//按秩排序  加权标记法
// 加权标记法需要将树中所有节点都增设一个权值，用以表示该节点所在树中的高度（比如用rank[x]=3表
// 示 x 节点所在树的高度为3）。这样一来，在合并操作的时候就能通过这个权值的大小来决定谁当谁的上级
// （玄慈哭了：“正义终会来到，但永不会缺席”）。
int rank[N];额外开一个数组存他们的等级
void merge(int x,int y)
{
    x=root(x);
    y=root(y);
    if(x==y)return;
    if(rank[x]>rank[y])swap(x,y);
    arr[x]=y;
    if(rank[x]==rank[y])rank[y]++;
}

//或者这样写
void union(int x,int y)
{
    x=find(x);							//寻找 x的代表元
    y=find(y);							//寻找 y的代表元
    if(x==y) return ;					//如果 x和 y的代表元一致，说明他们共属同一集合，则不需要合并，直接返回；否则，执行下面的逻辑
    if(rank[x]>rank[y]) pre[y]=x;		//如果 x的高度大于 y，则令 y的上级为 x
    else								//否则
    {
        if(rank[x]==rank[y]) rank[y]++;	//如果 x的高度和 y的高度相同，则令 y的高度加1
        pre[x]=y;						//让 x的上级为 y
    }
}