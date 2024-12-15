#include <iostream>
void add(int carrots)
{
    using namespace std;
    carrots=2*carrots;
    cout <<carrots;
}
int main()
{
    using namespace std;
    int carrots;
    cin >> carrots;
    add(carrots);
    return 0;
}