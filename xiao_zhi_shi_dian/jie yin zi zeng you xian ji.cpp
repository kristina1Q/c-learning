//*--t左结合，先自增再解引
//*t++右结合，但后缀自增需在计算之后进行，因此还是解引原来的值
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int *a=new int [5];
//     a[0]=1;
//     a[1]=2;
//     a[2]=3;
//     a[3]=4;
//     a[4]=5;
//     int m=*++a;
//     int n=*a++;
//     cout << m << endl;
//     cout << n << endl;
//     delete [] a;
//     return 0;
// }
//上面代码的错误
// 这一行代码要释放动态分配的内存，但是由于 a 已经指向数组的第三个元素（而不是数组的起始位置），
// 调用 delete[] 将导致未定义行为，因为它将释放错误的内存地址。正确的做法是保留数组的起始地址，以
// 便可以正确释放内存。

//修改：
#include <iostream>
int main()
{
    using namespace std;
    int *a=new int [5];
    int *q=&a[0];
    a[0]=1;
    a[1]=2;
    int m=*++q;
    int n=*q++;
    cout << m << endl;
    cout << n << endl;
    delete [] a;
    return 0;
}