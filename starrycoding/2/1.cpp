#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <int> stk;
    int need=1;
    int n,m;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        cin >> m;
        stk.push(m);
        while(stk.size()&&need<=n&&stk.top()==need)
        {
            stk.pop();
            need++;
        }
    }
    if(stk.size()!=0)cout << "No";
    else cout << "Yes";
    return 0;
}