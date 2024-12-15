//string class定义在头文件<string>中
//使用string，起始为空str，输入或者初始化时会自动分配字符串大小
//string更安全，方便，c++的超能力
//string构造函数
string str：生成空字符串
string s(str)：生成字符串为str的复制品
string s(str, strbegin,strlen)：将字符串str中从下标strbegin开始、长度为strlen的部分作为字符串初值
string s(cstr, char_len)：以C_string类型cstr的前char_len个字符串作为字符串s的初值
string s(num ,c)：生成num个c字符的字符串
string s(str, stridx)：将字符串str中从下标stridx开始到字符串结束的位置作为字符串初值
eg:
    string str1;               //生成空字符串
    string str2("123456789");  //生成"1234456789"的复制品
    string str3("12345", 0, 3);//结果为"123"
    string str4("012345", 5);  //结果为"01234"
    string str5(5, '1');       //结果为"11111"
    string str6(str2, 2);      //结果为"3456789"


// #include <iostream>
// #include <string>
// int main()
// {
//     using namespace std;
//     string a;
//     string b;
//     (cin >> a).get();
//     cin>> b;
//     cout << a << endl << b<<endl;
//     return 0;
// }


//字符串之间的比较是逐个字符按照ASCII码大小进行比较的，调用str1.compare(str2)成员函数。


//不能将一个数组赋给另一个数组，但是可以将一个string赋给另一个string
// #include <iostream>
// #include <string>
// int main()
// {
//     using namespace std;
//     string a;
//     string b;
//     cin >> a;
//     b=a;
//     cout << b <<endl;
//     return 0;
// }


//可以使用+将两个字符串合并 ,也可以使用+=
//使用stringname.size()来获取string长度,size（）是个类，操作对象为stringname
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string a;
//     string b;
//     (cin >> a).get();
//     int len =a.size();
//     cout << len << endl;
//     cin >> b;
//     cout << a+b << endl;
//     return 0;
// }


//整行输入的语法：getline（cin，name）
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string a;
//     getline(cin,a);
//     int len =a.size();
//     cout << a << endl<<len<<endl;
//     return 0;
// }


//insert()
//插入元素每个insert函数都接受一个迭代器作为其第一个参数，将元素插入到迭代器所
//1.在容器的特定位置插入元素(插入到前面)需用字符串的方式插入
//string& insert(int pos,const string& str);
// #include <iostream>
// #include <string>
// #include <iterator>
// using namespace std;
// int main()
// {
//     string arr1="1313131";
//     // for(int i=0;i<arr1.size();i++)
//     // {
//     //     if(arr1[i]=='1')
//     //     {
//     //         arr1.insert(i+1,"a");
//     //     }
//     // }
//     // string arr2="AAA";
//     // arr1.insert(0,arr2);
//     // cout << arr1;
//     return 0;
// }


//string& insert(int pos,int n,char c); 从pos位置开始插入n个字符c
// #include <iostream>
// #include <string>
// #include <iterator>
// using namespace std;
// int main()
// {
//     string arr1="1313131";
//     arr1.insert(0,3,'A');
//     cout << arr1<<"\n";
//     arr1.clear();
//     cout << arr1.size();
//     return 0;
// }


//arr1.clear()清除所有元素，避免重复开销
//string& erase(int pos,int n=npos); 从pos位置开始删除n个字符(包括自身)
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string arr1("a1111");
//     arr1.erase(0,1);
//     cout <<arr1;
//     return 0;
// }


//查找元素
//1.查找函数find和rfind，功能是查找指定字符串是否存在，若存在返回出现的下标位置，若不存在返回-1
//int find(const char* s,int pos=0); 从pos开始查找字符串s第一次出现的位置
//int find(const string& str,int pos = 0,int n);从pos开始查找字符串str的前n个字符第一次出现的位置
//int rfind(const char* s, int pos = npos); 从pos开始查找字符串s最后一次出现的位置
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int ans=0;
    string arr1="1121121112";
    const string arr2="112";
    for(int i=0;i<arr1.size();i++)
    {
        if(arr1.find(arr2,i)!=-1)
        {
            ans++;
            i+=2;
        }
    }
    cout <<ans;
    return 0;
}






