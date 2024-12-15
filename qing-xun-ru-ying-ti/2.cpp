//https://www.marscode.cn/practice/ln506nkj46de8w?problem_id=7424418560930512940
#include <string>
#include <iostream>

std::string solution(const std::string& s) {
    int i,mark1=0,mark2;
    for(i=0;i<s.size();i++)
    {
        if(s[i]!='0')break;
    }
    mark2=i;
    std::string arr(s.size(),'\0');
    for(i=0;i<s.size();i++)arr[i]=s[i];
    std::string arr1(arr,mark2);
        for(i=0;i<arr1.size();i++)
    {
        if(arr1[i]=='.')
        {
        mark1=i-3;
        break;
        }
    }
    if(mark1==0)mark1=arr1.size()-3;
    while(mark1>0)
    {
        arr1.insert(mark1,",");
        mark1-=3;
    }
    return arr1;
}

int main() {
    std::cout << (solution("02300545202") ) << std::endl;
}