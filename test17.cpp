#include <bits/stdc++.h>
#define LL long long
using namespace std;
int n;
LL ans, min1 = 114514;
vector<int> arr1{};
stack<long long> arr3{};
int x[]{0, 0, -1, 1};
int y[]{1, -1, 0, 0};
int nowx, nowy;
void searching()
{
    vector<vector<int>> arr2(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == 1)
        {
            ans++;
            arr2[0][i] = 1;
            for (int j = 0; j < 4; j++)
            {
                nowx = x[j];
                nowy = i + y[j];
                if (nowx >= 0 && nowx < n && nowy >= 0 && nowy < n && arr2[nowx][nowy] == 0)
                    arr2[nowx][nowy] = 2;
            }
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr2[i - 1][j] != 0)
                continue;
            arr2[i][j] = 1;
            for (int m = 0; m < 4; m++)
            {
                nowx = i + x[m];
                nowy = j + y[m];
                if (nowx >= 0 && nowx < n && nowy >= 0 && nowy < n && arr2[nowx][nowy] == 0)
                    arr2[nowx][nowy] = 2;
            }
            ans++;
        }
    }
    if (arr2[n - 2][0] == 0)
    {
        arr2[n - 1][0] = 1;
        ans++;
        arr2[n - 1][1] = 2;
        for (int j = 1; j < n; j++)
        {
            if (arr2[n - 2][j] == 0)
            {
                arr2[n - 1][j] = 1;
                for (int m = 0; m < 4; m++)
                {
                    nowx = n - 1 + x[m];
                    nowy = j + y[m];
                    if (nowx >= 0 && nowx < n && nowy >= 0 && nowy < n && arr2[nowx][nowy] == 0)
                        arr2[nowx][nowy] = 2;
                }
                ans++;
                continue;
            }
            if (j - 1 >= 0 && arr2[n - 1][j - 1] == 0)
            {
                arr2[n - 1][j] = 1;
                for (int m = 0; m < 4; m++)
                {
                    nowx = n - 1 + x[m];
                    nowy = j + y[m];
                    if (nowx >= 0 && nowx < n && nowy >= 0 && nowy < n && arr2[nowx][nowy] == 0)
                        arr2[nowx][nowy] = 2;
                }
                ans++;
                continue;
            }
            if (arr2[n - 1][j] == 2)
                continue;
        }
        if (arr2[n - 1][n - 1] == 0)
            ans++;
    }
    else
    {
        arr2[n - 1][1] = 1;
        ans++;
        arr2[n - 1][2] = 2;
        for (int j = 2; j < n; j++)
        {
            if (arr2[n - 2][j] == 0)
            {
                arr2[n - 1][j] = 1;
                for (int m = 0; m < 4; m++)
                {
                    nowx = n - 1 + x[m];
                    nowy = j + y[m];
                    if (nowx >= 0 && nowx < n && nowy >= 0 && nowy < n && arr2[nowx][nowy] == 0)
                        arr2[nowx][nowy] = 2;
                }
                ans++;
                continue;
            }
            if (j - 1 >= 0 && arr2[n - 1][j - 1] == 0)
            {
                arr2[n - 1][j] = 1;
                for (int m = 0; m < 4; m++)
                {
                    nowx = n - 1 + x[m];
                    nowy = j + y[m];
                    if (nowx >= 0 && nowx < n && nowy >= 0 && nowy < n && arr2[nowx][nowy] == 0)
                        arr2[nowx][nowy] = 2;
                }
                ans++;
                continue;
            }
            if (arr2[n - 1][j] == 2)
                continue;
        }
        if (arr2[n - 1][n - 1] == 0)
            ans++;
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < (1 << n); i++)
    {
        ans = 0;
        for (int m = 0; m < n; m++)
        {
            if (i >> m & 1)
                arr1.push_back(1);
            else
                arr1.push_back(0);
        }
        searching();
        arr1.clear();
        min1 = min(ans, min1);
    }
    cout << min1;
    return 0;
}