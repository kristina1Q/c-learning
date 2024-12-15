//https://www.luogu.com.cn/problem/P1141
#include <bits/stdc++.h>
using namespace std;
int map1[1010][1010]{},n;
int map2[1010][1010]{};
long max1,jishu;
long mark1,mark2;
int x[]={0,0,-1,1};
int y[]={1,-1,0,0};
void dfs(int a,int b,long e)
{
    map2[a][b]=1;
    if(map1[a][b]==0)
    {
        for(int i=0;i<4;i++)
        {
             int new_a = a + x[i];  
            int new_b = b + y[i];  
            if (new_a >= 1 && new_a <= n && new_b >= 1 && new_b <= n && map1[new_a][new_b] == 1 && map2[new_a][new_b] != 1) {  
                e++;  
                jishu++;
                if(jishu==2)
                {
                    jishu-=10000;
                    map2[mark1][mark2]=0;
                }
                if(e>max1)max1=e;
                dfs(new_a, new_b, e);   
                e--;   
            }  
        }
    }
    else if(map1[a][b]==1)
    {
        for(int i=0;i<4;i++)
        {
            int new_a = a + x[i];  
            int new_b = b + y[i];  

            if (new_a >= 1 && new_a <= n && new_b >= 1 && new_b <= n && map1[new_a][new_b] == 0 && map2[new_a][new_b] != 1) {  
                e++;  
                jishu++;
                if(jishu==2)
                {
                    jishu-=10000;
                    map2[mark1][mark2]=0;
                }
               if(e>max1)max1=e;
                dfs(new_a, new_b, e);  
                e--;  
            }
        }
    }
    map2[a][b]=0;
}
int main()
{
    int a,b;
    long m;
    cin >>n >>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%1d",&map1[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        jishu=0;
        max1=0;
        cin>>a>>b;
        mark1=a,mark2=b;
        dfs(a,b,0);
        cout<<max1<<"\n";
    }
    return 0;
}