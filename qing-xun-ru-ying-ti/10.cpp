//https://www.marscode.cn/practice/ln506nkj46de8w?problem_id=7424436653622296620
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int n, int k) {
    int ans=k*(1+n)*n/2;
    return ans;
}

int main() {
    std::cout << (solution(3, 1) == 6) << std::endl;
    std::cout << (solution(2, 2) == 6) << std::endl;
    std::cout << (solution(4, 3) == 30) << std::endl;
}