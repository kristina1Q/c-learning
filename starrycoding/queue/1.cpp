//https://www.starrycoding.com/problem/359
#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;
int rel[101];
int now=0;
void searching()
{
    queue <int> arr;
    int n,m,d;
    scanf("%d%d",&n,&m);
    int cp=m;
    for(int i=0;i<n;i++)
    {//https://www.starrycoding.com/problem/359
#include <iostream>
#include <stdio.h>
#include <queue>
using namespace std;
int rel[101];
int now=0;
void searching()
{
    queue <int> arr;
    int n,m,d;
    scanf("%d%d",&n,&m);
    int cp=m;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&d);
        arr.push(d);
    }
    while(arr.size()>1)
    {
        while(cp>1)
        {
        d=arr.front();
        arr.push(d);
        arr.pop();
        cp--;
        }
        arr.pop();
        cp=m;
    }
   rel[now]=arr.front();
   now++;
}
int main()
{
    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        searching();
    }
    for(int i=0;i<t;i++)
    {
        cout <<rel[i]<<"\n";
    }
    return 0;
}
        scanf("%d",&d);
        arr.push(d);
    }
    while(arr.size()>1)
    {
        while(cp>1)
        {
        d=arr.front();
        arr.push(d);
        arr.pop();
        cp--;
        }
        arr.pop();
        cp=m;
    }
   rel[now]=arr.front();
   now++;
}
int main()
{
    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        searching();
    }
    for(int i=0;i<t;i++)
    {
        cout <<rel[i]<<"\n";
    }
    return 0;
}