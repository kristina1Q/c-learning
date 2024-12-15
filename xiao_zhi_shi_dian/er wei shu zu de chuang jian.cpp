//string 类
// #include <iostream>
// #include <string>
// int main()
// {
//     using namespace std;
//     int n;
//     cin >>n;
//     string arr[n];               //用string arr[10(n)]{}来初始化，不然会报错
//     for(int i=0;i<n;i++)
//     {
//         cin >>arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout << arr[i]<<endl;
//     }
//     return 0;
// }


//vector 类
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