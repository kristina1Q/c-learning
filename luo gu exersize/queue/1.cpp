#include <iostream>
#include <queue>
using namespace std;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    long n,x;
    queue <long> arr;
    int a;
    cin>>n;
    for(long i=0;i<n;i++)
    {
        cin>>a;
        if(a==1) 
        {
            cin >> x;
            arr.push(x);
        }
        else if(a==2)
        {
            if(arr.size()!=0)arr.pop();
            else cout <<"ERR_CANNOT_POP\n";
        }
        else if(a==3)
        {
            if(arr.size()!=0)
        cout <<arr.front()<<"\n";
        else cout <<"ERR_CANNOT_QUERY\n";
        }
        else if(a==4)cout <<arr.size()<<"\n";
    }
    return 0;
}