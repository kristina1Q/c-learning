#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if(a>='a'&&a<='z'||a>='A'&&a<='Z')
    {
        cout << "character";
    }
    else if(a>='0'&&a<='9')
    {
        cout << "digit";
    }
    else
    {
        cout << "ERROR";
    }
    return 0;
}