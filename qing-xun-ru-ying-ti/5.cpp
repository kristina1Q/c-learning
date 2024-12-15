//https://www.marscode.cn/practice/ln506nkj46de8w?problem_id=7424418560665370668
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(int n, int k, string s) {
    for(int i=0;i<n;i++)
    {
        if(k==0)break;
        if(s[i]=='1'&&s[i+1]=='0')
        {
            k--;
            swap(s[i],s[i+1]);
            if(i>=1)i-=2;
        }  
    }
    return s;
}

int main() {
    cout << (solution(5, 2, "01010") == "00101") << endl;
    cout << (solution(7, 3, "1101001") == "0110101") << endl;
    cout << (solution(4, 1, "1001") == "0101") << endl;
    return 0;
}