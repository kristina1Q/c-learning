//bool类型只有true和false 2种，数字被转换时，非零为true ，零被转换为false
//用true赋值时，true为1，false为0
#include <iostream>
using namespace std;
int main()
{
    int ans=true;
    int promise=false;
    bool start=-100;
    bool stop=0;
    cout<<ans<<endl<<promise<<endl;
    cout<<start<<endl<<stop<<endl;
    return 0;
}