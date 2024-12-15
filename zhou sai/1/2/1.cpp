#include <iostream>
using namespace std;
int result[101]{};
int exam11()
{
    int l,r;
    cin >> l>> r;
    while(l>2)
    {
        l-=2;
    }
    while(r>2)
    {
        r-=2;
    }
    if(l==2&&r==2)return 1;
    else if(l==2&&r==0)return 1;
    else if(l==2&&r==1)return 1;
    else if(l==0&&r==2)return 1;
    else if(l==0&&r==0)return 1;
    return 0;
}
int main()
{
    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        result[i]=exam11();
    }
    for(int i=0;i<t;i++)
    {
        if(result[i]==1)cout <<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}