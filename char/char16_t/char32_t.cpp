//针对wchar_t做出的变化，char16_t字符常量长16，char32_t长32位
#include <iostream>
using namespace std;
int main()
{
    char16_t ch=u'q';
    char32_t cm=U'\U0000222B';
    wchar_t cn=L'q';
    cout<<ch<<endl<<cm<<endl;
    wcout<<cn<<endl;
    wcin>>cn;
    wcout<<cn;
    return 0;
}