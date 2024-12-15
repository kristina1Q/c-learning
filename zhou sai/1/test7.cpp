//https://vjudge.net/contest/672481#problem/D
//用 vector ,已AC
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int a[1000]{0};
int b[1000]{0};
void search(int i)
{
    int n,q,mark1,mark2,tell;
    cin >> n >> q;
    vector <vector<char>> arr(n,vector<char>(q));
    for(int m=0;m<n;m++)
    {
        for(int z=0;z<q;z++)
        {
            cin >> arr[m][z];
        }
    }
    for(int m=0;m<n;m++)
    {
        tell=0;
        for(int z=0;z<q;z++)
        {
            if(arr[m][z]=='#')
            {
                b[i]=z+1;
                tell=1;   
                break;
            }
        }
        if(tell==1)
        {
            break;
        }
    }
        for(int m=0;m<q;m++)
    {
        tell=0;
        for(int z=0;z<n;z++)
        {
            if(arr[z][m]=='#')
            {
                a[i]=z+1;
                tell=1;
                break;
            }
        }
        if(tell==1)
        {
            return;
        }
    }
    
}
int main()
{
    int t;
    cin >>t;
    for(int i=0;i<t;i++)
    {
        search(i);
    }
    for(int i=0;i<t;i++)
    {
        cout << a[i] << " "<< b[i] <<endl;
    }
    return 0;
}



// //https://vjudge.net/contest/672481#problem/D
// //用 string, 同样 AC
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// int a[1000]{0};
// int b[1000]{0};
// void search(int i)
// {
//     int n,q,mark1,mark2,tell;
//     cin >> n >> q;
//     string arr[n];
//     for(int m=0;m<n;m++)
//     {
//         cin >> arr[m];
//     }
//     for(int m=0;m<n;m++)
//     {
//         for(int z=0;z<q;z++)
//         {
//             if(arr[m][z]=='#')
//             {
//                 b[i]=z+1;
//                 tell=1;   
//             }
//         }
//     }
//         for(int m=0;m<q;m++)
//     {
//         for(int z=0;z<n;z++)
//         {
//             if(arr[z][m]=='#')
//             {
//                 a[i]=z+1;
//                 tell=1;
//             }
//         }
//     }
    
// }
// int main()
// {
//     int t;
//     cin >>t;
//     for(int i=0;i<t;i++)
//     {
//         search(i);
//     }
//     for(int i=0;i<t;i++)
//     {
//         cout << a[i] << " "<< b[i] <<endl;
//     }
//     return 0;
// }