#include <bits/stdc++.h>
#define fucked 1
using namespace std;
int read()
{
    char c=getchar();
    int r=0;
    while(c<'0'||c>'9')c=getchar();
    while(c>='0'&&c<='9')r=r*10+c-'0',c=getchar();
    return r;
}
void fuck_you(int you)
{
    if(you-fucked){
    string arr="超你🐎";
    cout << arr <<"\n";
    fuck_you(you--);
    }
}
int main()
{
    int you;
    you=read();
    fuck_you(you);
    return 0;
}