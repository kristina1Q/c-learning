//swap可以交换两个结构体的值
//结构体类型须一样
// #include <iostream>
// #include <array>
// #include <string>
// using namespace std;
// struct sdudent
// {
//     array <int,2> arr;
// };
// typedef struct sdudent sdu;
// int main()
// {   
//     sdu a[2];
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//             cin >> a[i].arr[j];
//         }
//     }
//     swap(a[0],a[1]);
//     for(auto i:a)
//     {
//         for(int j=0;j<2;j++)
//         {
//             cout << i.arr[j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;       
// }

//交换数组的值，数字，字符数组类型，大小须一样
//对于string类型，可以大小不一样
// #include <iostream>
// #include <array>
// #include <string>
// int main()
// {
//     using namespace std;
//     array <int,4> arr1{1,2,3,4};
//     array <int,4> arr2{5,6,7,8};
//     string arr3,arr4;
//     swap(arr1,arr2);
//     for(auto i:arr2)
//     {
//         cout << i << " ";
//     }
//     cin >> arr3 >>arr4;
//     swap(arr3,arr4);
//     for(auto i:arr3)
//     {
//         cout << i;
//     }
//     return 0;
// }


//交换简单元素
// #include <iostream>
// #include <array>
// int main()
// {
//     using namespace std;
//     array <int,5> arr{1,2,3,4,5};
//     swap(arr[1],arr[0]);
//     cout << arr[0];
//     return 0;
// }