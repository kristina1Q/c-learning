#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a[10],ans=0,qi=0,ou=0,now=0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        ans+=a[i];
        if(a[i]%2==0)ou++;
        else qi++;
    }
    char *b=new char [ans];
    for(int i=0;i<ans;i++)
    {
        b[i]='0';
    }
    if(ans%2==0)
    {
        if(qi>0)printf("-1");
        else
        {
            int d=a[0]/2;
            for(int i=0;i<10;i++)
            {
                while(a[i]>0)
                {
                    b[now]=b[ans-1-now]=i+48;
                    now++;
                    a[i]-=2;
                }
            }
                while(d>0)
                {
                    swap(b[d-1],b[d]);
                    swap(b[ans-d],b[ans-d-1]);
                    d--;
                }
                if(b[0]=='0')printf("-1");
                else
                {
            for(int i=0;i<ans;i++)
        {
            printf("%c",b[i]);
        }
                }
        }
    }
    else
    {
        if(qi>1)printf("-1");
        else
        {
            if(a[0]==1&&ans==1)
            {
                printf("0");
            }
            else
            {
            int d=a[0]/2,mark;
            for(int i=0;i<10;i++)
            {
                while(a[i]>=2)
                {
                    b[now]=b[ans-1-now]=i+48;
                    now++;
                    a[i]-=2;
                }
                for(int i=0;i<10;i++)
                {
                    if(a[i]==1)
                    {
                        b[ans/2]=i+48;
                        break;
                    }
                }
            }
                while(d>0)
                {
                    swap(b[ans-d],b[ans-d-1]);
                    swap(b[d-1],b[d]);
                    d--;
                }
                if(b[0]=='0')printf("-1");
                else
                {
            for(int i=0;i<ans;i++)
        {
            printf("%c",b[i]);
        }
                }
        }
        }
    }
    return 0;
}