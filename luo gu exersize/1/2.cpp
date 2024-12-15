#include <iostream>
#include <array>
using namespace std;
int main()
{
    array <int,4> arr{};
    arr.fill(3);
    for(auto i:arr)
    {
        cout << i << " ";
    }
    return 0;
}