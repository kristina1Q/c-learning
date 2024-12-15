//同时输入数字和字符串
//下面例子出错，原因：将回车读取到getline里面了
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int a;
//     cin>>a;
//     char b[20];
//     cin.getline(b,20);
//     cout << a<<endl<<b<<endl;
//     return 0;
// }

//修改：
// #include <iostream>
// int main()
// {
//     using namespace std;
//     int a;
//     (cin>>a).get();
//     char b[20];
//     cin.getline(b,20);
//     cout << a<<endl<<b<<endl;
//     return 0;
// }