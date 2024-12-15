//https://leetcode.cn/problems/maximal-rectangle/?envType=problem-list-v2&envId=monotonic-stack&
//1.先暴力
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        stack<int> stk{};
        int row=matrix[0].size(),temp,max1=0;
        int col=matrix.size();
        vector<int> arr(row);
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                if(matrix[i][j]=='1')arr[j]+=1;
                else arr[j]=0;
            }
            for(int m=0;m<row;m++){
                if(!stk.size())stk.push(m);
                else{
                    if(arr[m]>=arr[stk.top()])stk.push(m);
                    else{
                        while(stk.size()>=2&&arr[m]<arr[stk.top()]){
                            temp=stk.top();
                            stk.pop();
                            max1=max(max1,(m-stk.top()-1)*temp);
                        }
                        if(arr[m]<arr[stk.top()]){
                            max1=max(max1,arr[stk.top()]*m);
                            stk.pop();
                        }
                        stk.push(m);
                    }
                }
            }
            while(stk.size()>=2){
                temp=arr[stk.top()];
                stk.pop();
                max1=max(temp*(row-stk.top()));
            }
            if(stk.size()){
                max1=max(max1,(row+1)*arr[stk.top()]);
                stk.pop();
            }
        }
    }
};
