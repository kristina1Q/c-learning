#include <iostream>
using namespace std;
struct student
{
    char a[10];
    char b[10];
}stu[101];
int main()
{   
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >>stu[i].a >> stu[i].b;
        swap(stu[i].a[0],stu[i].b[0]);
    }
    for(int i=0;i<t;i++)
    {
        cout <<stu[i].a<< " "<<stu[i].b<<endl;
    }
    return 0;
}