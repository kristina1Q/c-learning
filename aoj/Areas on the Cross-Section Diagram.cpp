// https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/3/ALDS1_3_D
#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
using i64 = long long;
int main()
{
    stack<int> stk1;
    stack<pair<int, int>> stk2;
    char c;
    int sum = 0;
    for (int i = 0; cin >> c; ++i)
    {
        if (c == '\\')
            stk1.push(i);
        else if (c == '/' && stk1.size() > 0)
        {
            int j = stk1.top();
            stk1.pop();
            sum += i - j;
            int a = i - j;
            while (stk2.size() > 0 && stk2.top().first > j)
            {
                a += stk2.top().second;
                stk2.pop();
            }
            stk2.push(make_pair(j, a));
        }
    }
    vector<int> v;
    while (stk2.size() > 0)
    {
        v.push_back(stk2.top().second);
        stk2.pop();
    }
    cout << sum << '\n';
    cout << v.size();
    for (auto it = v.rbegin(); it != v.rend(); ++it)
    {
        cout << ' ' << *it;
    }
    cout << endl;
    return 0;
}