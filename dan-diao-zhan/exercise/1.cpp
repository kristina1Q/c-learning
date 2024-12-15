//https://leetcode.cn/problems/0ynMMM/?envType=problem-list-v2&envId=monotonic-stack&
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
    int max1=0,temp;
    stack<int>stk;
    int l=0,r=heights.size()-1;
    for(int i=0;i<heights.size();i++)
    {
        if(stk.size()==0)stk.push(i); 
        else{
            if(heights[i]>=heights[stk.top()])stk.push(i);
            else
            {
                while(stk.size()>=2&&heights[i]<heights[stk.top()]){
                temp=heights[stk.top()];
                stk.pop();
                max1=max(max1,temp*(i-stk.top()-1));
            }
            if(heights[i]<heights[stk.top()]){
                max1=max(max1,heights[stk.top()]*(i));
                stk.pop();
            }
            stk.push(i);
            }
        }
    }
    while(stk.size()>=2){
        temp=stk.top();
        stk.pop();
        max1=max(max1,heights[temp]*(r-stk.top()));
    }
    if(stk.size()){
        max1=max(max1,heights[stk.top()]*(r-l+1));
    }
    return max1;
    }
};