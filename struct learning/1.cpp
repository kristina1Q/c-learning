//c++允许在声明结构体变量时省略struct
//允许初始化时省略=
//如果大括号内未包含任何东西，则将所有成员填充为0
//结构体可以赋值,传参及返回结构体
#include <iostream>
#include <string>
using namespace std;
struct sdudent
{
    int year;
    string a;
};
int main()
{
    sdudent b{1,"wang"};
    sdudent c{2,"rui"};
    cout << b.year << endl;
    c=b;
    cout << c.year << endl;
    return 0;
}