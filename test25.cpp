#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> arr;
    arr.push_back(1);
    arr.emplace_back(2);
    auto add = [](auto a, auto b) -> int
    {
        return *a + *b;
    };
    cout << add(arr.begin(), arr.end());
    return 0;
}