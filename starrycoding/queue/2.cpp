//https://www.starrycoding.com/problem/351
#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;
void searching()
{
    vector<char> arr1{};
    vector<char> arr2{};
    string arr;
    cin >>arr;
    for(long i=0;i<arr.size();i++)
    {
        if(arr[i]>='0'&&arr[i]<='9')arr1.push_back(arr[i]);
        else arr2.push_back(arr[i]);
    }
    for(long i=0;i<arr1.size();i++)cout <<arr1[i];
    cout <<'#';
    for(long i=0;i<arr2.size();i++)cout <<arr2[i];
    cout<<'\n';
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        searching();
    }
    return 0;
}