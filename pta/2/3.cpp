#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,mark=0,stu;
    double average=0;
    cin >> n;
    if(n==0)
    {
        cout <<"average = 0.0"<<endl<<"count = 0";
    }
    else
    {
    for(int i=0;i<n;i++)
    {
        cin >> stu;
        average+=stu;
        if(stu>=60)
        {
            mark++;
        }
    }
    cout <<"average = "<< fixed<<setprecision(1)<<average/n <<endl;
    cout <<"count = "<< mark;
    }
    return 0;
}