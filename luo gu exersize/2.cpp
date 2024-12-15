//https://www.luogu.com.cn/problem/solution/P1554
#include <iostream>
using namespace std;
int main()
{
    long long M,N,b;
    cin >> M >> N;
    int a[10]{};
    for(;M<=N;M++)
    {
        b=M;
        while(b/10!=0)
        {
            a[b%10]++;
            b/=10;
        }
        a[b%10]++;
    }
    for(auto i:a)
    {
        cout << i << " ";
    }
    return 0;   
}