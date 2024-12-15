//使用{}进行(常量)初始化 (所以尽量都用{})，不能输入变量
// 小括号 () 用于传统的构造和赋值，允许隐式转换。
// 大括号 {} 提供更严格的初始化方式，禁止隐式转换，适用于数组、结构体等的初始化。
#include <iostream>
using namespace std;
int main()
{
    int a(1);
    cout << a << endl;
    int b{2};
    cout << b << endl;
    return 0;
}