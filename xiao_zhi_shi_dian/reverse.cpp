//可以用来判断回文数
//reverse函数(a,a+len(a))
//将容器a中元素颠倒
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    string arr{"ntr"};
    char a[]="123";
    reverse(arr.begin(),arr.end()); //c++的string需要使用迭代器
    cout << arr<<"\n";
    reverse(a,a+strlen(a)); //c风格字符串使用指针
    cout <<a;
    return 0;
}