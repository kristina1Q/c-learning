// //1.getchar()版快读
//getchar()改成getchar_unlocked()效率接近fread()顶级效率优化，但是本地测试不了，先用getchar()
//写，防止写挂了，后面改成getchar_unlocked()就行了
// #include <bits/stdc++.h>
// #define LL long long
// using namespace std;
// LL a;
// template <typename T>
// int read()
// {
//     register T r=0,f=1;
//     char c=getchar();
//     while(c<'0'||c>'9'){
//         if(c=='-')f=-1;
//         c=getchar();
//         }
//     while('0'<=c&&c<='9'){
//             r=(r<<3)+(r<<1)+(c^48),c=getchar();
//     }
//     return r*f;
// }
// int main()
// {
//     LL n;
//     cin>>n;
//     while(n--){
//     a+=read<long long>();
//     }
//     cout<<a;
//     return 0;
// }