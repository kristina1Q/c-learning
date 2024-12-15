#include <iostream>
#define LL long long
using namespace std;
LL jiech(int i)
{
    LL a=1;
    for(int m=1;m<=i;m++)
    {
        a*=m;
    }
    return a;
}
int main()
{
    ios::sync_with_stdio(false);
    LL result=0;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        result+=jiech(i);
    }
    cout << result;
    return 0;
}