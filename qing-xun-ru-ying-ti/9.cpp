//https://www.marscode.cn/landing?uid=3674999525749075&problem_id=7424436653372506156&from=juejin&scene=practice&utm_source=practice&utm_medium=youthcamp&utm_campaign=youthcamp_examine#include <iostream>
using namespace std;

int solution(int a, int b) {
    int i=1;
    while(b*i<a){
        i++;
    }
    return i;
}

int main() {
    cout << (solution(10, 1) == 10) << endl;
    cout << (solution(10, 2) == 5) << endl;
    cout << (solution(10, 3) == 4) << endl;
    return 0;
}