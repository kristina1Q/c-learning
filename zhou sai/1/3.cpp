#include <iostream>
#include <stdlib.h>
using namespace std;
int good()
{
    int count=0;
    long long he=0,max=0;
    int a;
    cin >> a;
    long long *b=(long long*)malloc(a*sizeof(long long));
    for(int i=0;i<a;i++)
    {
        cin >> b[i];
    }
    if(b[0]==0)
    {
        count++;
    }
    he+=b[0];
    for(int i=1;i<a;i++)
    {
        he+=b[i];
        max=he;
        for(int j=0;j<=i;j++)
        {
            max-=b[j];
            if(max==b[j])
            {
                count ++;
                break;
            }
            max+=b[j];
        }
    }
    free(b);
    return count;
}
int main()
{
    int t;
    cin >> t;
    int *a=(int *)malloc(t*sizeof(int));
    for(int i=0;i<t;i++)
    {
        a[i]=good();
    }
    for(int i=0;i<t;i++)
    {
        cout << a[i]<<endl;
    }
    free(a);
    return 0;
}