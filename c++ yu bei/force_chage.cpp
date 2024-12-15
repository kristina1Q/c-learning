//(typename) 变量  风格来自c语言
//typename (变量)  c++风格，让转换像函数调用
//static_cast<long> (变量)这种转换更严格
#include <iostream>
using namespace std;
int main()
{
    char a{'Z'};
    cout<<static_cast<int> (a)<<endl;
    auto b{1234.1e2};
    cout << b << endl;
    return 0;
}