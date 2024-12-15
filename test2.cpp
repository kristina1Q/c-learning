//https://www.luogu.com.cn/problem/B3834#submit
#include <iostream>
int main()
{
    using namespace std;
    int a,i,count=0;
    bool m[1001]={0};
    cin >> a;
    for(i=1;i<a;i++)
    {
        if(a%i==0&&m[i]==false)
        {
            count++;
            m[a/i]=true;
        }
    }
    cout << count <<endl;
    return 0;
}