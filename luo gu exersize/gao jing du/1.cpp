//https://www.luogu.com.cn/problem/P1601
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    char arr[3][503]{};
    cin >>arr[0] >>arr[1];
    reverse(arr[0],arr[0]+strlen(arr[0]));
    reverse(arr[1],arr[1]+strlen(arr[1]));
    int i=0;
    int sum=0;
    for(;i<503;i++)
    {
        if(arr[0][i]=='\0'&&arr[1][i]=='\0')break;
        else if(arr[0][i]!='\0'&&arr[1][i]!='\0')
        {
        sum+=arr[0][i]-'0'+arr[1][i]-'0';
        arr[2][i]=sum%10+'0';
        sum/=10;
        }
        else if(arr[0][i]=='\0'&&arr[1][i]!='\0')
        {
            sum+=arr[1][i]-'0';
            arr[2][i]=sum%10+'0';
            sum/=10;
        }
        else if(arr[0][i]!='\0'&&arr[1][i]=='\0')
        {
            sum+=arr[0][i]-'0';
            arr[2][i]=sum%10+'0';
            sum/=10;
        }
    }
    if(sum)arr[2][i]=sum+'0';
    reverse(arr[2],arr[2]+strlen(arr[2]));
    cout <<arr[2];
    return 0;
}