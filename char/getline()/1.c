//读取输入字符时，系统判断回车，制表符和空格为结束，做到整行读取，可以使用getline()
//getline(arrayname,size)包含两个参数，名称，以及大小
#include <iostream>
using namespace std;
int main()
{
    char a[20];
    char b[20];
    cin.getline(a,20).getline(b,20);
    cout << a <<endl<< b <<endl;
    return 0;
}