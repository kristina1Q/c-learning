//https://www.starrycoding.com/submission/32497
//1:常规解法，记忆化
// #include <iostream>
// #define LL long long
// using namespace std;
// LL a[51]{};
// int main()
// {
//     int n;
//     a[0]=1;
//     a[1]=1;
//     LL m=0;
//     cin >> n;
//     if(n<=2)
//     {
//         cout <<"1";
//     }
//     else
//     {
//         for(int i=2;i<=n-1;i++)
//         {
//             a[i]=a[i-1]+a[i-2];
//             m=a[i];
//         }
//         cout << m;
//     }
//     return 0;
// }


//使用vector和迭代器
#include <iostream>
#define LL long long
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    LL m;
    cin >> n;
    vector<int> arr(n);
    arr[0]=arr[1]=1;
    if(n<=2)cout << "1";
    else
    {
        for(int i=3;i<=n;i++)
        {
            m=*(arr.rbegin())+*(--arr.rbegin());
            arr.push_back(m);
        }
        cout << arr[n];
    }
    return 0;
}