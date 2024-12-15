#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<long long> arr1{};
    int n;
    cin >>n;
    arr1.push_back(1);
    arr1.push_back(1);
    for(int i=3;i<=n;i++)
    {
        arr1.push_back(*arr1.rbegin()+*(++arr1.rbegin()));
    }
    cout <<arr1.back();
    return 0;
}