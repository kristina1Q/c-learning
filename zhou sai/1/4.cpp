#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int e[1001]{};
int f[1001]{};
void ManhattanCircle(int d)
{
    int a,b,mark1,mark2,tell;
    cin >> a >> b;
    char **c=(char **)malloc(a*sizeof(char *));
    for(int i=0;i<b;i++)
    c[i]=(char *)malloc(b*sizeof(char));
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%c",&c[i][j]);
        }
    }
    for(int i=0;i<a;i++)
    {
        tell=0;
        for(int j=0;j<b;j++)
        {
            if(c[i][j]=='#')
            {
                tell=1;
                mark2=j;
                break;
            }
        }
        if(tell==1)
        {break;}
    }
    for(int j=0;j<b;j++)
    {
        tell=0;
        for(int i=0;i<a;i++)
        {
            if(c[i][j]=='#')
            {
                tell=1;
                mark1=i;
                break;
            }
        }
        if(tell==1)
        {break;}
    }
    e[d]=mark1;
    f[d]=mark2;
}
int main()
{
    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        ManhattanCircle(i);
    }
    for(int i=0;i<t;i++)
    {
        cout <<e[i] << " " << f[i] <<endl;
    }
    return 0;
}