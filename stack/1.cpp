//stack是一种先进先出的数据结构，被称为栈，它只有一端可以出入。
// 栈中进入数据称为——入栈(push)
// 栈中弹出数据称为——出栈(pop)
//无法遍历里面的数，无法维护里面的数，我愿称之为鸡肋的一批
//里面必须有元素，才能用pop和top函数，因此，条件检查时加上if(stk.size())判定

// 1.构造函数
// stack<T> stk; //stack采用模板类实现，默认构造，T为数据类型，如int等

//3.数据存取
// push(elem); //入栈，向栈顶添加元素
// pop(); //出栈，删除栈顶元素
// top(); //返回栈顶元素

// 4.大小操作
// empty(); //判断栈是否为空
// size(); //返回栈的大小

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <int> stk;
    int n;
    cin >> n;
    stk.push(n);
    cout <<stk.top() << " " <<stk.size() << "\n";
    stk.pop();
    cout << stk.size();
    return 0;
}
