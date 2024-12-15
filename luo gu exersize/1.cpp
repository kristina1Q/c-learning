//https://www.luogu.com.cn/problem/P2615
#include <iostream>
using namespace std;
int main()
{
    int a[40][40]={};
    int m,i,j,mark1,mark2;
    cin >> m;
    a[0][m/2]=1;
    mark1=0,mark2=m/2;
    for(i=2;i<=m*m;i++)
    {
        if(mark1==0&&mark2!=m-1)
        {
            mark1=m-1;
            mark2+=1;
            a[mark1][mark2]=i;
        }
        else if(mark1!=0&&mark2==m-1)
        {
            mark2=0;
            mark1-=1;
            a[mark1][mark2]=i;
        }
        else if(mark1==0&&mark2==m-1)
        {
            mark1+=1;
            mark2=m-1;
            a[mark1][mark2]=i;
        }
        else if(mark1!=0&&mark2!=m-1)
        {
            if(a[mark1-1][mark2+1]==0)
            {
                mark1-=1;
                mark2+=1;
                a[mark1][mark2]=i;
            }
            else
            {
                mark1+=1;
                a[mark1][mark2]=i;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}