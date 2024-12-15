//https://www.marscode.cn/practice/ln506nkj46de8w?problem_id=7414004855074766892
#include <iostream>
#include <cmath>
int solution(int x, int y) {
    if(x-y==0)return 0;
    if(x>y){
        int temp=x;
        x=y;
        y=temp;
    }
        int pal=1;
        int ans=0;
        int adds=0;
        int m=y-x;
        for(;;)
        {
            if(adds+pal>=m)return ans+1;
            if(adds+2*pal>=m)return ans+2;
            adds+=2*pal;
            pal++;
            ans+=2;
        }
}

int main() {
  
  std::cout << (solution(12, 6) == 4) << std::endl;
  std::cout << (solution(34, 45) == 6) << std::endl;
  std::cout << (solution(50, 30) == 8) << std::endl;
  return 0;
}