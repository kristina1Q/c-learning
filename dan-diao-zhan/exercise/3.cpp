//https://leetcode.cn/problems/trapping-rain-water/?envType=problem-list-v2&envId=monotonic-stack&
class Solution {
public:
    int trap(vector<int>& height) {
        int res=0,temp;
        stack<int> stk{};
        for(int i=0;i<height.size();i++){
            if(!stk.size())stk.push(i);
            else{
                if(height[i]<=height[stk.top()])stk.push(i);
                else{
                    while(stk.size()>=2&&height[i]>height[stk.top()]){
                        temp=stk.top();
                        stk.pop();
                        res+=(min(height[i],height[stk.top()])-temp)*(i-stk.top()-1);
                    }
                    if(height[i]>height[stk.top()])stk.pop();
                    stk.push(i);
                }
            }
        }
    }
    return res;
};