//https://blog.csdn.net/weixin_64489589/article/details/139168869?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522D73F629A-1889-450E-A276-B2D69AB1BDE7%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=D73F629A-1889-450E-A276-B2D69AB1BDE7&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_positive~default-1-139168869-null-null.142^v100^control&utm_term=cin.get&spm=1018.2226.3001.4187
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a >>b;
    char **c=new char* [a];
    for(int i=0;i<a;i++)
    {
        c[i]=new char [b];
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin >> c[i][j];
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}