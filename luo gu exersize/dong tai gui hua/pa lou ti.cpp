//https://www.luogu.com.cn/problem/P1255
// #include <iostream>
// #include <vector>
// #include <cstring>
// #define LL long long
// using namespace std;
// vector <vector<char>> dp(5000,vector<char>(100,'0'));
// void add1(int i)
// {
//     for(int m=0;m<dp[i-1].size();m++)
//     {
//         if(dp[i][m]-'0'+dp[i-1][m]-'0'+dp[i-2][m]-'0'>=10)
//         {
//             dp[i][m]+=dp[i-1][m]-'0'+dp[i-2][m]-10-'0';
//             dp[i][m+1]+='1';
//         }
//         else
//         {
//             dp[i][m]+=dp[i-1][m]-'0'+dp[i-2][m]-'0';
//         }
//     }

// }
// int main()
// {
//     int N;
//     cin >>N;
//     dp[1][0]=dp[0][0]='1';
//     for(int i=2;i<=5000;i++)
//     {
//         add1(i);
//     }
//     for(int i=dp[N].size()-1;i>=0;--i)
//     {
//         cout <<dp[N][i];
//     }
//     return 0;
// }


#include <iostream>  
#include <vector>  
#include <cstring>  

using namespace std;  

vector<vector<char>> dp(5003, vector<char>(5003, '0'));  

void add1(int i) {  
    int carry = 0;  
    
    // 从低位到高位进行加法  
    for (int m = 0; m < dp[i].size(); m++) {  
        int sum = (dp[i-1][m] - '0') + (dp[i-2][m] - '0') + carry;  // 加上进位  
        dp[i][m] = (sum % 10) + '0';  // 当前位  
        carry = sum / 10;  // 计算进位  
    }  
    
    // 如果最后还有进位需要添加  
    if (carry > 0) { 
            int m=dp[i].size(); 
            dp[i][m] = (carry % 10) + '0';  
            carry /= 10;   
    }  
}  

int main() {  
    int N;  
    cin >> N;  
    
    dp[0][0] = '1'; 
    dp[1][0] = '1'; 
    
    for (int i = 2; i <= N; i++) {  
        add1(i);  
    }  
    
    // 输出结果，找到最后的有效位并从高位输出来显示  
    int start = dp[N].size() - 1;  
    while (start >= 0 && dp[N][start] == '0') {  
        start--;  
    }
        for (int i = start; i >= 0; --i) {  
            cout << dp[N][i];  
        }  
    return 0;  
}