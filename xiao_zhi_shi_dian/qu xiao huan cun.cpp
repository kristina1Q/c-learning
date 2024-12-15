//cin 会先读入缓冲区，会浪费时间，可以用ios::sync_with_stdio(false);取消同步
//但取消后不能与scanf及printf混用
//一般不用endl，\n减少开销
#include <iostream>
using  namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int a;
    cin >>a;
    cout << a;
    return 0;
}