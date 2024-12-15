//https://www.marscode.cn/practice/ln506nkj46de8w?problem_id=7424418560931168300
#include <iostream>
#include <string>
using namespace std;

int solution(string S, string T) {
    int ans=0;
    while(S.size()>T.size())
    {
        ans++;
        S.erase(S.size()-1,1);
    }
    // cout<<ans<<" "<<S;
    for(int i=0;i<S.size();i++)if(S[i]!=T[i])ans++;
    return ans;
}

int main() {
    cout << (solution("aba", "abb") == 1) << endl;
    cout << (solution("abcd", "efg") == 4) << endl;
    cout << (solution("xyz", "xy") == 1) << endl;
    cout << (solution("hello", "helloworld") == 0) << endl;
    cout << (solution("same", "same") == 0) << endl;
    return 0;
}