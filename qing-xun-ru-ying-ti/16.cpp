#include <iostream>
#include <string>
#include <vector>
std::string solution(const std::string& s) {
    std::string S=s;
    const std::string arr="%100";
    for(int i=0;i<S.size();i++)
    {
        if(S[i]=='a'){
            S.erase(i,1);
            S.insert(i,arr);
        }
    }
    // S.insert(0,1,'\'');
    // S.insert(S.size(),1,'\'');
    // std::cout<<S<<"\n";
    return S; 
}

int main() {
    std::cout << (solution("abcdwa") == "%100bcdw%100") << std::endl;
    std::cout << (solution("banana") == "b%100n%100n%100") << std::endl;
    std::cout << (solution("apple") == "%100pple") << std::endl;
    return 0;
}