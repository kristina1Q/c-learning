//使用\"可以正确输出双引号
//回车：\r  单引号：\' 水平制表符：\t (tab) 垂直制表符：\v  反斜杠："\\"    换行：\n
#include <iostream>
using namespace std;
int main()
{   
    cout<<"\"good\"?\\"; 
    wchar_t bob='P';
    wcout<<L"tall"<<endl;
    return 0;   
}