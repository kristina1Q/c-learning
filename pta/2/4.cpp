#include <iostream>
using namespace std;
int main()
{
    int n=0,ans=0;
    while(n!=-1)
    {
        cin>>n;
        if(n%3==0||n%7==0)
        {
            ans+=n;
        }
    }
    cout << ans;
    return 0;
}