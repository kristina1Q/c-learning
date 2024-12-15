#include <iostream>
int main()
{
    using namespace std;
    int N,m,mark1=0,mark2=0;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin>> m;
        if(m%2==0)
        {
            mark1++;
        }
        else
        {
            mark2++;
        }
    }
    cout << mark2 << " " << mark1;
    return 0;
}