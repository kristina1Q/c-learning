#include <iostream>
#include <cstring>
#include <string>
#include <stack>
using namespace std;
int result[1010]{};
int compar()
{
    string arr1;
    cin >>arr1;
    long m=arr1.size();
    stack <char> arr2{};
    for(long i=0;i<m;i++)
    {
        if(arr1[i]=='('||arr1[i]=='['||arr1[i]=='{')
        {arr2.push(arr1[i]);}
        else
        {
        if(arr2.empty())
        {return 0;}
        else{
            if((arr1[i]==')'&&arr2.top()=='(')||
        (arr1[i]==']'&&arr2.top()=='[')||
        (arr1[i]=='}'&&arr2.top()=='{'))
        {
            arr2.pop();
        }
        else{return 0;}
        }
        }
    }
    if(arr2.size())return 0;
    return 1;
}
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        result[i]=compar();
        if(result[i])cout <<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}