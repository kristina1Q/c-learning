#include <iostream>
using namespace std;
int b[101]{0};
void Maximum(int a,int c)
{
    int m=1,n,ans=0,maxmark=0,ansmax=0;
    for(int i=2;i<=a;i++)
    {
        n=a/i;
        ans=(i+n*i)*n/2;
        if(ans>ansmax)
        {
            ansmax=ans;
            maxmark=i;
        }
    }
    b[c]=maxmark;
}
int main()
{
    int t,a;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        cin >>a;
        Maximum(a,i);
    }
    for(int i=0;i<t;i++)
    {
        cout <<b[i] <<endl;
    }
    return 0;
}