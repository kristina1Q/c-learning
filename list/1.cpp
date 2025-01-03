// c++中list模板实现双向链表，可以使用[]访问元素，比删除和插入的复杂度都是O1，而vector
// 不支持使用下标访问
// 可以使用如下语法：
// list<int> v;
// for(auto i:v){}
// 表示遍历v中每一个元素并赋值给i
// 的复杂度是O(n)
// 功能：复杂度均为O1
// size()
// begin()
// end()
// push_back(x) 在表末尾添加元素
// pop_back() 删除末尾元素
// push_front(x)
// 在表开头添加元素
// pop_front() 删除表开头元素
// insert(p, x)
// 在表的位置p处插入元素x
// erase(p)
// 删除表中p处的元素
// clear() 清空所有元素 // 复杂度为O(n)

#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
int main()
{
    list<char> L;
    L.push_back('b');
    L.push_back('c');
    L.push_front('a');
    cout << L.front();
    cout << L.back();
    L.pop_front();
    L.push_back('d');
    cout << L.front();
    cout << L.back();
    return 0;
}