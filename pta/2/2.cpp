#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,mark=0;
    cin >> a;
    for(c=a/5;c>0;c--)
    {
        for(b=a/2;b>0;b--)
        {
            for(d=a;d>0;d--)
            {
                if((5*c+2*b+d)==a)
                {
                    mark++;
                    cout <<"fen5:"<<c<<", fen2:"<<b<<", fen1:"<<d<<", total:"<<c+b+d<<endl;
                }
            }
        }
    }
    cout << "count = "<< mark;
    return 0;
}