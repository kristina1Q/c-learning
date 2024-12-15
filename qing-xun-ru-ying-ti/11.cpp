//https://www.marscode.cn/practice/ln506nkj46de8w?problem_id=7424418560929628204
#include <iostream>
#include <vector>
using namespace std;

int solution(int a, int b) {
    std::vector<int>arr{};
    while(a!=0){
        arr.push_back(a%10);
        a/=10;
    }
    int i=0;
    while(arr[i]<b&&i<arr.size())i++;
    if(i==arr.size())arr.push_back(b);
    else{
            arr.insert(arr.begin()+i,b);
    }
    b=0;
    for(int i=arr.size()-1;i>=0;--i)b=b*10+arr[i];
    return b;
}

int main() {
    cout << (solution(76543, 4) == 765443) << endl;
    cout << (solution(1, 0) == 10) << endl;
    cout << (solution(44, 5) == 544) << endl;
    cout << (solution(666, 6) == 6666) << endl;
    return 0;
}