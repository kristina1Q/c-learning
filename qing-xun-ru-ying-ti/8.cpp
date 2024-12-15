//https://www.marscode.cn/practice/ln506nkj46de8w?problem_id=7414004855077617708
#include <iostream>
#include <vector>
int searching(std::vector<int>A,int start,int end)
{
    int min1=A[start];
    for(int i=start+1;i<=end;i++)if(min1>A[i])min1=A[i];
    return min1;
}
int solution(int n, std::vector<int> A) {
    int max1=A[0],k=1;
    int lmark=0,rmark=0;
    for(int i=1;i<A.size();i++)
    {
        while(searching(A,lmark,rmark+1)*(k+1)>max1&&rmark+1<A.size()){
            max1=searching(A,lmark,rmark+1)*(k+1);
            // std::cout<<"a"<<max1<<"\n";
            k++;
            rmark++;
        }
        while(lmark+1<=rmark&&searching(A,lmark+1,rmark)*(k-1)>max1){
            max1=searching(A,lmark+1,rmark)*(k-1);
            // std::cout<<"b"<<max1<<"\n";
            k--;
            lmark++;
        }
    }
    // std::cout<<max1<<"\n";
    return max1;
}

int main() {
    
    std::vector<int> A_case1 = std::vector<int>{1, 2, 3, 4, 5};
    std::cout << (solution(5, A_case1) == 9) << std::endl;
    return 0;
}
