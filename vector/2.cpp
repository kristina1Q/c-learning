//vector 变长数组
//定义：vector<typename> name;
//这里的typename可以是任何基本类型，例如int、double、char、结构体等，也可以是STL标准容器，
//例如set、queue、vector等。


//接下来我们来看下定义二维vector数组的方法：
//第一种：vector<typename> Arrayname[size];    
//第二种：vector <vector<type>> arrayname(n,vector<type>(j))结合初始化来看，创建一个n行j列的数组
// 第一种(不符合c++标准。还是不用了）：vector<int> vi[100];
// vi[0] ~ vi[100 - 1]中每一个都是一个vector容器
// #include <iostream>
// #include <vector>
// int main()
// {
//     using namespace std;
//     int n,ch,mark;
//     cin >> n;
//     vector <int> arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin >> mark;
//         for(int j=0;j<mark;j++)
//         {
//             cin >> ch;
//             arr[i].push_back(ch);
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(auto j:arr[i])
//         {
//             cout << j <<" ";
//         }
//         cout << endl;
//     }
//     // cout <<arr[0][1];    访问第一组第二个元素
//     return 0;
// }


//第二种：
// #include <iostream>  
// #include <vector>  
// using namespace std;  
// int main() {  
//     int n, j;  
//     cin >> n >> j; // 先读取行数和列数  
//     // 使用二维 vector 声明矩阵  
//     vector<vector<char>> arr(n, vector<char>(j));   
//     // 读取字符输入  
//     for (int i = 0; i < n; i++) {  
//         for (int q = 0; q < j; q++) {  
//             cin >> arr[i][q]; // 直接读取字符  
//         }  
//     }  
//     // 打印字符数组  
//     for (int i = 0; i < n; i++) {  
//         for (auto q:arr[i]) {  
//             cout << q; // 输出字符  
//         }  
//         cout << endl; // 输出换行  
//     }  
//     return 0;  
// } 

//vector常用初始化方法
//使用花括号直接赋值：
// vector<int> v{1,2,3,4,5}; //直接使用花括号赋值
// for(auto i : v) cout << i << " "; //输出1 2 3 4 5


//使用圆括号赋值：
// vector<int> v(5); //初始化5个值为0的元素
// for(auto i : v) cout << i << " "; //输出0 0 0 0 0

// vector<int> v(5, 4); //初始化5个值为4的元素
// for(auto i : v) cout << i << " "; //输出4 4 4 4 4


//vector容器内元素的访问
// 1、通过下标访问：
// 定义为vector<int> v 的vector容器，可以使用 v[0]、v[1]、v[2]...这种方式来访问。当然，
// 下标不能越界(v.size()-1之内)。

// 通过迭代器来访问：
//迭代器定义：vector<typename>::iterator it;
//这样就得到了迭代器it，并且可以通过 *it 来访问vector里的元素。例：
// for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
// {
// 		cout << *it << " ";
// }


//一维数组的输入
//push_back()函数，在队尾添加元素
// #include <iostream>
// #include <vector>
// int main()
// {
//     using namespace std;
//     vector<int> arr;
//     int number,n;
//     cin >> n;
//     for(int i=0;i<n;i++)
//     {
//         cin >> number;
//         arr.push_back(number);
//     }
//     for(auto i:arr)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }

//二维数组的输入
//vector<vector<char>> arr(n, vector<char>(j));   
//     // 读取字符输入  
//     for (int i = 0; i < n; i++) {  
//         for (int q = 0; q < j; q++) {  
//             cin >> arr[i][q]; // 直接读取字符  
//         }  
//     }  


// 4.vector的插入和删除 
// 函数原型：
// 1.push_back(ele); //尾部插入元素ele
// 2.pop_back(); //删除最后一个元素
// 3.insert(const_iterator pos,ele); //在迭代器指向的位置pos处插入一个元素ele
// 4.insert(const_iterator pos,int count,ele); //在迭代器指向的位置pos处插入count个元素ele
// 5.erase(const_iterator pos); //删除迭代器指向的元素
// 6.erase(const_iterator begin,const_iterator end); //删除迭代器从begin到end之间的元素（左闭右开）
// 7.clear(); //删除容器中所有元素
// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {   
//     vector<int> arr1{1,2,3,4,5,6};
//     arr1.insert(arr1.begin()+1,9);
//     arr1.pop_back();
//     arr1.insert(arr1.begin(),3,2);
//     arr1.erase(arr1.begin()+1,arr1.end());
//     arr1.push_back(4);
//     arr1.erase(arr1.begin());
//     for(auto i:arr1)
//     {
//         cout << i<< " ";
//     }
  
//     return 0;
// }


