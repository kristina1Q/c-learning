#include <iostream>
#include <array>
using namespace std;
int main()
{
    int l,m,max=0,result=0;
    cin >> l >> m;
    int min=l;
    array <int,10001> arr0;
    array <int,101> arr1{};
    array <int,101> arr2{};
    arr0.fill(1);
    for(int i=0;i<m;i++)
    {
        cin >> arr1[i] >> arr2[i];
        while(arr1[i]<=arr2[i])
        {
            arr0[arr1[i]++]=0;
        }
    }
    for(int i=0;i<=l;i++)
    {
        if(arr0[i]!=0)
        result+=1;
    }
    cout << result;
    return 0;
}