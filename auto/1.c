//auto 关键字，根据输入确定变量类型 必须在定义时初始化变量
//我勒个强大的自动判断
//不然报错declaration of 'auto a' has no initializer
#include <iostream>
using namespace std;
struct sdudent
{
    int year;
    int a;
};
int main()
{
    auto a{2};
    sdudent *m[3] ={NULL,NULL,NULL};
    // sdudent **q=m;容易写错
    auto q=m;  // 自动判断
    cin>>a;
    cout << a <<endl;
    return 0;
}