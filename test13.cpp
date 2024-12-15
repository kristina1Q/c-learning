#include <iostream>
#include <string>
using namespace std;
int main()
{
    char arr2[1000]{};
    int arr3[1000]{};
    int now=0,ans=0;
    string arr1{};
    cin >>arr1;
    char mark=arr1[0];
    arr1.insert(arr1.size(),1,'0');
    for(int i=1;i<arr1.size();i++)
    {
        ans++;
        if(arr1[i]!=mark)
        {
            arr3[now]=ans;
            arr2[now]=mark;
            mark=arr1[i];
            ans=0;
            now++;
        }
    }
    for(int i=0;i<now;i++)
    {
        cout <<arr2[i];
        if(arr3[i]!=1)cout << arr3[i];
    }
    return 0;
}