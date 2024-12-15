//https://www.marscode.cn/practice/ln506nkj46de8w?problem_id=7414004855075520556
#include <iostream>
#include <string>
#include <vector>
std::string searching(std::string template_ ,std::string titles)
{
    int start=0,end=0,spa=0,pos=0;
    for(int i=0;i<template_.size();i++)
    {
        if(template_[i]=='{')
        {
            // if(template_[i]=='{'&&i==0)spa=1;
            end=i-1;
            if(end>=start)
            {
            const std::string arr(template_,start,end-start+1);
            // std::cout <<arr <<"\n";
            if(spa==0&&template_[0]!='{')
            {
                spa=1;
                pos=titles.find(arr,pos);
                if(pos!=0)return "False,";
                pos+=arr.size();
            }
            else if(spa==0&&template_[0]=='{')
            {
                // std::cout <<"chao\n";
                spa=1;
                pos=titles.find(arr,pos);
                if(pos==-1)return "False,";
                // std::cout <<pos<<"\n";
                pos+=arr.size();
            }
            else
            {
                pos=titles.find(arr,pos)+arr.size();
                // std::cout <<pos<<"\n";
                // std::cout <<pos <<"\n";
                if(pos==-1||pos==0)return "False,";
            }
            }
            
        }
        if(template_[i]=='}')start=i+1;
    }
    if(start<template_.size()) //特判末尾余下的
    {
        const std::string arr(template_,start,template_.size()-start+1);
        pos=titles.rfind(arr,titles.size());
        // std::cout <<"\n"<<pos;
        if(pos==-1||(titles.size()-pos)!=arr.size())return "False,";
        // std::cout<<arr<<"\n";
    }
    return "True,";
}
std::string solution(int n, std::string template_,std::vector<std::string> titles) {
    std::string result={};
    for(int i=0;i<titles.size();i++)
    {
    result+=searching(template_,titles[i]);
    }
    result.erase(result.size()-1,1);
    // std::cout<<result<<"\n";
    return result;
}

int main() {
  //  You can add more test cases here
  std::vector<std::string> testTitles1 = {"adcdcefdfeffe", "adcdcefdfeff",
                                          "dcdcefdfeffe", "adcdcfe"};
std::vector<std::string> testTitles2 = {
      "CLSomGhcQNvFuzENTAMLCqxBdj", "CLSomNvFuXTASzENTAMLCqxBdj",
      "CLSomFuXTASzExBdj",          "CLSoQNvFuMLCqxBdj",
      "SovFuXTASzENTAMLCq",         "mGhcQNvFuXTASzENTAMLCqx"};
  std::vector<std::string> testTitles3 = {"abcdefg", "abefg", "efg"};

  std::cout << (solution(4, "ad{xyz}cdc{y}f{x}e", testTitles1) ==
                "True,False,False,True")
            << std::endl;
  std::cout << (solution(6, "{xxx}h{cQ}N{vF}u{XTA}S{NTA}MLCq{yyy}",
                         testTitles2) == "False,False,False,False,False,True")
            << std::endl;
  std::cout << (solution(3, "a{bdc}efg", testTitles3) == "True,True,False")
            << std::endl;

  return 0;
}