//注意：不能用vector容器初始化queue
// 因为queue转换器要求容器支持front()、back()、push_back()及 pop_front()，说明queue的数
// 据从容器后端入栈而从前端出栈。所以可以使用deque（double-ended queue，双端队列）和list对
// queue初始化，而vector因其缺少pop_front（），不能用于queue。
// push() 在队尾插入一个元素
// pop() 删除队列第一个元素
// size() 返回队列中元素个数
// empty() 如果队列空则返回true
// front() 返回队列中的第一个元素
// back() 返回队列中最后一个元素

//初始化一个队列
// queue <int> arr;
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue <int> arr;
    arr.push(3);
    arr.push(4);
    cout <<arr.back()<<'\n';
    cout <<arr.front();
    return 0;
}