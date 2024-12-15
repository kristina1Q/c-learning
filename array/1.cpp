//声明格式 typename arrayname[arraysize]    size必须为常量或常量表达式,使用new可以避开变量限制
#include <iostream>
int main()
{
    using namespace std;
    int a[3]{0};
    for(int i=0;i<3;i++)
    {
        cout<< a[i] <<endl;
    }
    return 0;
}