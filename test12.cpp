#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr1{1,3,4,5,7};
    arr1.insert(0,"6");
    for(auto i:arr1)
    {
        cout << i << " ";
    }
    return 0;
}