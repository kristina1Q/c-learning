#include <iostream>
int main()
{
    using namespace std;
    int a,b;
    char c;
    cin >> a>> c >> b;
    if(c=='+')
    {
        cout << a+b;
    }
    else if(c=='-')
    {
        cout << a-b;
    }
    else if(c=='*')
    {
        cout << a*b;
    }
    else if(c=='/')
    {
        cout << a/b;
    }
    else if(c=='%')
    {
        cout << a%b;
    }
    else
    {
        cout <<"ERROR";
    }
    return 0;
}