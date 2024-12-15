//模板类array，长度固定，存储在静态内存栈中，与数组效率相同，比数组更方便，更安全
//包含头文件<array>


//array<>是唯一一个无任何东西被指定为初值时，会被预初始化的容器。这就意味着对于基础
//类型，初值可能不明确，而不是0，下面定义一个有110个int元素的数组arr：
//array <int,110> arr1;
//此时arr1中的元素是不确定的，可以使用列表初始化
//array <int,110> arr1{0}; 有没有0都会将它全设为0


//成员函数fill()  用指定值给所有成员赋值
// arr1.fill(3);


//成员函数at()访问元素会检查是否越界，时间开销很少，更安全，除非确定不会越界，否则应尽量使用at()
// arr1.at(2) 访问arr1[2]


//成员函数front和back，前者返回第一个元素的索引，后者返回第二个元素的索引
// 使用索引赋值会改变原数组元素的值
// #include <iostream>
// #include <array>
// int main()
// {
//     using namespace std;
//     array <int,10> arr1{0};
//     int len = arr1.size();
//     for(int i=0;i<len;i++)
//     {
//         cin >> arr1[i];
//     }
//     cout << arr1.at(2) << endl;
//     cout << arr1.front() <<endl << arr1.back() << endl;
//     arr1.front()=666; 
//     cout << arr1[0];
//     return 0;   
// }


//成员函数data（），返回指向数组元素对象第一个元素的首地址
//该函数无参数
// #include <iostream>
// #include <array>
// int main()
// {
//     using namespace std;
//     array <int,10> arr1{0};
//     int len = arr1.size();
//     for(int i=0;i<len;i++)
//     {
//         cin >> arr1[i];
//     }
//     cout << arr1.data() << endl << *(arr1.data()+1) << endl;
//     array <char,10> arr2{};
//     const char *arr3="wang rui";  //需要加上const，等号右边的"hello"是一个不变常量，在c++中叫做string literal，type是const char *，而p则是一个char指针。如果强行赋值就是将右边的常量强制类型转换成一个指针，结果就是我们在修改一个const常量。
//     memcpy(arr2.data(), arr3, arr2.size()); //内存复制
//     cout << arr2.data()<< endl;
//     return 0;   
// }


//成员函数size()和max_size()， 由于array在创建的时候必须明确指定大小，而且array为固定容器，因此size()与max_size()的返回值是相同的，通常使用size()函数。
//返回值类型size_t即无符号整数。
// #include <iostream>
// #include <array>
// int main()
// {
//     using namespace std;
//     array <int,5> arr1{};
//     for(int i=0;i<arr1.size();i++)
//     {
//         cout << arr1.at(i) << " ";
//     }
//     return 0;
// }


//成员函数empty()判断数组是否为空(大小)
//该函数在array中为鸡肋函数，因为array在定义的时候已经指明了大小，不可能为空。
// 如果变量为空，empty() 返回 true。
// 如果变量不为空，empty() 返回 false。
// #include <iostream>
// #include <array>
// int main()
// {
//     using namespace std;
//     array <int,5> arr1;
//     if(arr1.empty())
//     {
//         cout << "it has not initialize";
//     }
//     else
//     {
//         cout << "you had got it";
//     }
//     return 0;
// }


//get() 该函数返回array中指定元素的引用。
//get<5>(arr) = 666; 将修改arr[5]的值为666
// #include <iostream>
// #include <array>
// int main()
// {
//     using namespace std;
//     array <int,5> arr1={1,2,3,4,5};
//     int a=get<1> (arr1);
//     cout << a <<endl;
//     get <2> (arr1)=666;
//     for(int i=0;i<arr1.size();i++)
//     {
//         cout << arr1[i] <<" ";
//     }
//     return 0;
// }


//begin和end迭代器，访问起始和末尾的指针
//begin指向a[0]，也就是第一个元素，end指向末尾外后一个元素，end()-1才指向最后一个元素
#include <iostream>
#include <array>
int main()
{
    using namespace std;
    array<int,5> arr{};
    for(int i=0;i<arr.size();i++)
    {
        cin >> arr[i];
    }
    cout << *(arr.end()-1);
    cout << endl << *arr.begin();
    return 0;
}