//https://ac.nowcoder.com/acm/contest/20960/1008
#include <bits/stdc++.h>
#include <stdio.h>
int main()
{
    int a[11]={0},ans=0,mark=1;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        ans+=a[i];
    }
    char *b=new char [ans];
    for(int i=0;i<ans;i++)
    {
        b[i]='0';
    }
    if(ans%2==0)
    {
        for(int i=0;i<10;i++)
    {
        if(a[i]%2!=0)
        {
            mark=0;
            break;
        }
    }
    if(mark!=0)
    {
        int d=1;
        while(a[0]>0)
        {
            b[d]=b[ans-1-d]='0';
            a[0]-=2;
        }
        for(int i=1;i<10;i++)
        {
            if(a[i]!=0)
            {
                d=i;
                break;
            }
        }
        b[0]=b[ans-1]=d;
        a[d]-=2;
        for(int i=1;i<10;i++)
        {
            
        }
    }
    }
    if(mark==1)
    for(int i=0;i<ans;i++)
    {
        printf("%c",b[i]);
    }
    delete(b);
    return 0;
}