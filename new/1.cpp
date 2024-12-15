//c语言中使用malloc来动态分配内存，free释放内存
//c++中使用new来分配，delete来释放
//指针分配的内存可以用*(name+1)来引用，而数组名这样做不合法
//指向单个元素，delete a，指向数组，delete[] a
//指针成员的访问用->
#include <iostream>
int main()
{
    using namespace std;
    int *a=new int;
    *a=1;
    cout << *a <<endl;
    delete a;
    int n;
    cin>> n;
    int *b=new int [n];
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << b[i]<<endl;
    }
    delete [] b;
    return 0;
}