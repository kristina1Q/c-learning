//https://leetcode.cn/problems/daily-temperatures/ 每日温度
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>stk;
        vector<int>arr(temperatures.size());
        for(int i=0;i<temperatures.size();i++){
            if(!stk.size())stk.push(i);
            else{
                if(temperatures[i]<=temperatures[stk.top()])stk.push(i);
                else{
                    while(stk.size()&&temperatures[stk.top()]<temperatures[i]){
                        arr[stk.top()]=i-stk.top();
                        stk.pop();
                    }
                    stk.push(i);
                }
            }
        }
        return arr;
    }
};