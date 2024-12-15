#include <iostream>
#include <string>
int main()
{
    using namespace std;
    int n;
    cin >>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<endl;
    }
    return 0;
}