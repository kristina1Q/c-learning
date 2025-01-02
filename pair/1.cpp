// 假设我想打包两种数据，第一个是学生的姓名，第二个是学生的学号，我们就可以写出如下结构体
struct student
{
    int number;
    char names[20];
};

// pair是C++已经定义好的结构体，同时也是一个类模板，并且使用前需要加上头文件<utility>
初始化 std::pair<第一个数据类型, 第二个数据类型> 变量名

    第一种
        std::pair<std::string, int>
            stu;
stu.first = "Weraphael";
stu.second = 2022;
注意：如果使用默认构造函数初始化，其成员变量first和second的值是0（如果是string就是空字符串）

    第二种
        std::pair<类型1, 类型2>
            变量名(第一个数据的初始值, 第二个数据的初始值);
// 对应的类型一定要匹配！！！

make_pair来添加pair
    p1 = make_pair(1, 2);