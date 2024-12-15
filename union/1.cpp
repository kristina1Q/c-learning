//存储多种数据类型，但每次只能一个，长度为最大成员长度，可以同时为成员类型
//一坨,史中史
#include <iostream>
#include <string>
using namespace std;
union student
{
    int year;
    double b;
};
int main()
{
    student a;
    a.year=10;
    cout << a.year <<endl;
    a.b=1.5;
    cout << a.b << endl;
    return 0;
}