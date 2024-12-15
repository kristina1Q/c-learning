//c++提供的快速打印数组的方式
//用来遍历数组或其他可迭代的集合（例如 std::vector）
// for (auto i : arr) {
//         cout<<i<<" ";
//     }


// #include <iostream>
// #include <string>
// int main()
// {
//     using namespace std;
//     string a;
//     getline(cin,a);
//     for(auto i:a)
//     {
//         if(i!=' ')
//         cout << i << " ";
//     }
//     return 0;
// }


//要修改数组的元素，需要使用不同的循环变量语法：
// for (double &x : prices)
// 	x = x * 0.80; //20% off sale
// 符号 & 表明 x xx 是一个引用变量，能让接下来的代码能够修改数组的内容，而第一种语法不能。


//还可结合使用基于范围的 for 循环和初始化列表：
// for (int x : {3, 5, 2, 8, 6})
// 	cout << x << " ";
// cout << '\n';
// #include <iostream>
// int main()
// {
//     using namespace std;
//     for(auto x : {3,4,5,6})
//     {
//         cout << x <<" ";
//     }
//     return 0;
// }


//当需要拷贝元素，但不可修改拷贝出来的值时，使用 for(const auto x:range)，避免拷贝开销。