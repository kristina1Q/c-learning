//https://www.luogu.com.cn/problem/P1134
#include <iostream>
using namespace std;
int main()
{
    long long n,m=1,mark;
    cin >> n;
    for(long long i=1;i<=n;i++)
    {
            mark=i;
            if(mark%10!=0)
            {
                mark%=10;
            }
            else
            {
                while(mark%10==0)
                {
                    mark/=10;
                }
                mark%=10;
            }
            m=m*mark;
            if(m%10!=0)
            {
                m%=10;
            }
            else
            {
                while(m%10==0)
                {
                    m/=10;
                }
                m%=10;
            }
        }
    cout << m;
    return 0;
}