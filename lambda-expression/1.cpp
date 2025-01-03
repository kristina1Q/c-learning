// auto f[](int a,int b)->int{return a+b;};

// Lambda表达式是一种在被调用的位置或作为参数传递给函数的位置定义匿名函数对象（闭包）的
// 简便方法。Lambda表达式的基本语法如下：
// [capture list] (parameter list) -> return type { function body }

// capture list 是捕获列表，用于指定 Lambda表达式可以访问的外部变量，以及是按值还是按引
// 用的方式访问。捕获列表可以为空，表示不访问任何外部变量，也可以使用默认捕获模式 & 或 =
//  来表示按引用或按值捕获所有外部变量，还可以混合使用具体
//  的变量名和默认捕获模式来指定不同的捕获方式。
// parameter list 是参数列表，用于表示 Lambda表达式的参数，可以为空，表示没有参数，也
// 可以和普通函数一样指定参数的类型和名称，还可以在 c++14 中使用 auto 关键字来实现泛型
// 参数。
// return type 是返回值类型，用于指定 Lambda表达式的返回值类型，可以省略，表示由编译器
// 根据函数体推导，也可以使用 -> 符号显式指定，还可以在 c++14 中使用 auto 关键字来实现
// 泛型返回值。
// function body 是函数体，用于表示 Lambda表达式的具体逻辑，可以是一条语句，也可以是多
// 条语句，还可以在 c++14 中使用 constexpr 来实现编译期计算。

// 值捕获（capture by value）：在捕获列表中使用变量名，表示将该变量的值拷贝到 Lambda
// 表达式中，作为一个数据成员。值捕获的变量在 Lambda 表达式定义时就已经确定，不会随着外
// 部变量的变化而变化。值捕获的变量默认不能在 Lambda 表达式中修改，除非使用 mutable 关
// 键字。

// 引用捕获（capture by reference）：在捕获列表中使用 & 加变量名，表示将该变量的引用传
// 递到 Lambda 表达式中，作为一个数据成员。引用捕获的变量在 Lambda 表达式调用时才确定，
// 会随着外部变量的变化而变化。引用捕获的变量可以在 Lambda 表达式中修改，但要注意生命周
// 期的问题，避免悬空引用的出现。

#include <iostream>
using namespace std;
using i64 = long long;
int main()
{
    int a = 1, b = 2;
    auto add = [&](int a, int b) -> auto
    {
        return a * b;
    };
    a += 1;
    cout << add(a, b);
    return 0;
}