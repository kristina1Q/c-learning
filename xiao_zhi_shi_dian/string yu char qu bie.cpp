//结论：string薄纱char，支持char的所有功能
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    string arr1;
    cin >> arr1;
    cout << (arr1[0]+=1);
    return 0;
}