//get()使用起来相对复杂，cin.get（name，size）无法读取换行符，可以用cin.get（）来吞掉
#include <iostream>
using namespace std;
int main()
{
    char a[20];
    char b[20];
    cin.get(a,20);
    cin.get();
    cin.get(b,20);
    cout << a <<"\n"<< b <<endl;
    return 0;
}