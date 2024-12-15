#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int n, int m, string s, string c) {
    int ans=0;
    int j;
    char a;
    for(int i=0;i<c.size();i++)
    {
        a=c[i];
        for(j=0;j<s.size();j++)
        {
            if(s[j]==a)
            {
                ans++;
                s.erase(j,1);
                break;
            }
        }
    }
    // std::cout <<ans<<"\n";
    return ans;
}

int main() {
    cout << (solution(3, 4, "abc", "abcd") == 3) << endl;
    cout << (solution(4, 2, "abbc", "bb") == 2) << endl;
    cout << (solution(5, 4, "bcdea", "abcd") == 4) << endl;
    return 0;
}