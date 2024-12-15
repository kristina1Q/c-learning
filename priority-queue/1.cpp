//包含头文件#include <queue>, 他和queue不同的就在于我们可以自定义其中数据的优先级, 让优先级高
// 的排在队列前面,优先出队
// 和队列基本操作相同：
// top 访问队头元素
// empty 队列是否为空
// size 返回队列内元素个数
// push 插入元素到队尾 (并排序)
// emplace 原地构造一个元素并插入队列
// pop 弹出队头元素
// swap 交换内容

//定义：priority_queue<Type, Container, Functional>
// Type 就是数据类型，Container 就是容器类型（Container必须是用数组实现的容器，比如vector,
// deque等等，但不能用 list。STL里面默认用的是vector），Functional 就是比较的方式，当需要用自
// 定义的数据类型时才需要传入这三个参数，使用基本数据类型时，只需要传入数据类型，默认是大顶堆
// 大顶堆：每个结点的值都大于或等于其左右孩子结点的值
// 小顶堆：每个结点的值都小于或等于其左右孩子结点的值
//一般是：
//升序队列
priority_queue <int,vector<int>,greater<int> > q;
//降序队列
priority_queue <int,vector<int>,less<int> >q;

//对于基础类型 默认是大顶堆
    priority_queue<int> a; 
    //等同于 priority_queue<int, vector<int>, less<int> > a;
    
  
    priority_queue<int, vector<int>, greater<int> > c;  //这样就是小顶堆
    priority_queue<string> b;



//自定义结构顺序
//greater<int> (>)小顶堆，less<in> (<)大顶堆
struct tep
{
    int x;
};
struct cmp
{
    bool operator()(tep a,tep b)
    {
        return a.x<b.x;
        这样就是大顶堆
    }
}
//创建
priority_queue<int,vector<int>,cmp> f;
