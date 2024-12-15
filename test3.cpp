#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[]={9,7,5,5,4,6,3,2,1,3};
    int n=sizeof(a)/sizeof(a[0]);
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    int *b=new int [max+1];
    for(int i=0;i<max+1;i++)
    {
        b[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    for(int i=0;i<max+1;i++)
    {
        if(b[i]!=0)
        {
            for(int j=b[i];j>0;j--)
            {
                cout <<left<<setw(2)<< i ;
            }
        }
    }
    delete [] b;
    return 0;
}