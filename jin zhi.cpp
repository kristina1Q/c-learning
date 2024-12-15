/*
1. 0x或0X开头为16进制数
2.第一位为0,第二位为1~7,则为8进制数
3.第一位为1~9,则基数为10,是10进制数*/

//dec(decimal)-转换为10进制输出，hex(hexadecimal)-转换为16进制输出，oct(octal)-转换为8进制输出
#include <iostream>
using namespace std;
int main()
{
    int a=42;
    cout<< a<<endl;
    cout<< hex; //转换为16进制输出
    cout<< a<<endl;
    cout<< oct;//转换为8进制输出
    cout<< a<<endl;
    return 0;
}