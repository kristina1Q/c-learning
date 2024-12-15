#include <iostream>
using namespace std;
int main()
{
    int n,m,ans=0,mark=0,he=0;
    double a;
    cin >> m >> n;
    for(;m<=n;m++)
    {
        mark=0;
        for(int i=2;i<m;i++)
        {
            if(m%i==0)
            {
                mark=1;
                break;
            }
        }
        if(mark==0)
        {
            ans++;
            he+=m;
        }
    }
    cout << ans << " "<<he;
    return 0;
}