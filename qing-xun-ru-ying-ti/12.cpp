#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;

int solution(int n, std::vector<int> nums) {
    if(nums.size()>=3){
        int ans=1;
        sort(nums.begin(),nums.end(),greater<int>());
        int mark=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=mark){
                mark=nums[i];
                ans++;
            }
            if(ans==3)return nums[i];
        }
        return nums[0];
    }
    else if(nums.size()==2){
        return max(nums[0],nums[1]);
    }
    else return nums[0];
}

int main() {
    std::cout << (solution(3, {3, 2, 1}) == 1) << std::endl;
    std::cout << (solution(2, {1, 2}) == 2) << std::endl;
    std::cout << (solution(4, {2, 2, 3, 1}) == 1) << std::endl;
    return 0;
}