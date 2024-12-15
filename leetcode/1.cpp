//https://leetcode.cn/problems/closest-prime-numbers-in-range/description/
#include <iostream>
using namespace std;
const int ch=1e6+10;
bool tell[ch]{0};
int primes[ch]{0};
int cha[ch]{0};
int main()
{
    int left,right,now=0;
    char a[10],b[10],c;
    cin >> a>> b >> left>>c>>a>>b>>right;
    for(int i=2;i<=right;i++)
    {
        if(!tell[i])primes[++now]=i;
        for(int j=1;j<=now&&primes[j]*i<=right;j++)
        {
            tell[primes[j]*i]=1;
            if(i%primes[j]==0)break;
        }
    }
    int lmark=0,rmark=0;
    now=0;
    for(int i=1;i<=right;i++)
    {
        if(primes[i]>=left&&primes[i]<=right)
        {
            cha[now]=primes[i];
            now++;
        }
        else if(primes[i+1]>right)break;
    }
    if(now<2)
    {
        cout <<"[-1,-1]";
    }
    else
    {
        int min=cha[1]-cha[0],deal;
        lmark=cha[0],rmark=cha[1];
        for(int i=2;i<now;i++)
        {
            deal=cha[i]-cha[i-1];
            if(deal<min)
            {
                min=deal;
                lmark=cha[i-1];
                rmark=cha[i];
            }
        }
        cout <<"[" <<lmark<<","<<rmark<<"]";
    }
    return 0;
}