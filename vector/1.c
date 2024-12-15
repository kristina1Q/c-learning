//vector模板类 使用new的替代品，更强大，可以附加新数据或中间插入数据
//包含头文件<vector>
//功能强大，效率稍低
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    int b;
    for(int i=0;i<5;i++)
    {
        cin >> b;
        a.push_back(b);
    }
    int len=a.size();
    for(int i=0;i<len;i++)
    {
        cout << a[i]<< endl;
    }
    return 0;
}