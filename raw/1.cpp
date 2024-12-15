//原始字符串raw：显示所有符号，转义符不再转义，用R"()"表示界限
// #include <iostream>
// int main()
// {
//     using namespace std;
//     cout << R"(\n,a,w'")"<< endl;
//     return 0;
// }

//如果想使用”和（，则用*+代替界限,或者自定义（空格，左括号，右括号，斜杠，控制字符除外）
#include <iostream>
int main()
{
    using namespace std;
    cout << R"*+(\n,a,(w)'")*+"<< endl;
    return 0;
}