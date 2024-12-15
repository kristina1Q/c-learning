//https://www.marscode.cn/practice/ln506nkj46de8w?problem_id=7414004855077584940
#include <iostream>
#include <vector>
struct  hulu
    {
        int e; //数量
        int f; //元素
    };
int cmp(const void *a,const void *b) {
	return (*(hulu*)a).f-(*(hulu*)b).f;
}
std::vector<int> solution(int n, int max, const std::vector<int>& array) {
    std::vector<int> mark1{};
    int tell=0,three=10000,two=10000,max1=0;
    int a[100000]{};
    for(int i=0;i<n;i++)
    {
        a[array[i]]++;
        if(a[array[i]]==2)
        {
            mark1.push_back(array[i]);
        }
        else if(a[array[i]]==3)tell++;
    }
    if(mark1.size()<=1||tell==0)return {0, 0};
    struct  hulu arr[mark1.size()];
    for(int i=0;i<mark1.size();i++)
    {
        arr[i].e=a[mark1[i]];
        arr[i].f=mark1[i];
    }
    qsort(arr, mark1.size(), sizeof(struct hulu), cmp);
    if(arr[0].f==1&&arr[0].e>=3)
    {
        for(int i=mark1.size()-1;i>=1;--i)
        {
            two=2*arr[i].f;
            if(two+3<=max)return {1,two/2};
        }
    }
    else if(arr[0].f==1&&arr[0].e==2)
    {
        for(int i=mark1.size()-1;i>=1;--i)
        {
            if(arr[i].e>=3)
            {
                three=3*arr[i].f;
            if(three+2<=max)return {three/3,1};
            }
        }
    }
    else
    {
    for(int i=mark1.size()-1;i>=0;i--)
    {
        if(arr[i].e>=3)three=3*arr[i].f;
        // std::cout <<arr[i].f<<'\n';  测试工具
        for(int m=mark1.size()-1;m>=0;--m)
        {
            if(m==i)continue;
        two=2*arr[m].f;
        // std::cout <<three<< " "<< two<<'\n';    测试工具
        if(three+two<=max)return {three/3, two/2};
        }
    }
    }
    return {0, 0};
    }
int main() {
    // Add your test cases here
    
    // std::vector<int> result1 = solution(31, 42, {3,3,11,12,12,2,13,5,13,1,13,8,8,1,8,13,12,9,2,11,3,5,8,11,1,11,1,5,4,2,5});
    // std::cout << (result1 == std::vector<int>{1,13}) << std::endl;

    // std::vector<int> result2 = solution(16, 42, {8,1,10,11,7,1,9,10,7,9,8,8,10,11,8,6});
    // std::cout << (result2 == std::vector<int>{10, 1}) << std::endl;

    std::vector<int> result3 = solution(30, 97, {9,3,11,7,8,11,13,6,11,4,9,7,8,11,5,9,3,1,5,8,10,2,8,12,5,9,2,12,5,4});
    std::cout << (result3 == std::vector<int>{11, 12}) << std::endl;

    return 0;
}



//升级版，去掉结构体，本身就是增加复杂度
//https://www.marscode.cn/practice/ln506nkj46de8w?problem_id=7414004855077584940
#include <iostream>
#include <vector>
#include <algorithm>
std::vector<int> solution(int n, int max, const std::vector<int> &array)
{
    std::vector<int> mark1{};
    int tell = 0, three = 10000, two = 10000, max1 = 0;
    int a[100000]{};
    for (int i = 0; i < n; i++)
    {
        a[array[i]]++;
        if (a[array[i]] == 2)
        {
            mark1.push_back(array[i]);
        }
        else if (a[array[i]] == 3)
            tell++;
    }
    if (mark1.size() <= 1 || tell == 0)
        return {0, 0};
    sort(mark1.begin(), mark1.end());
    if (mark1[0] == 1 && a[mark1[0]] >= 3)
    {
        for (int i = mark1.size() - 1; i >= 1; --i)
        {
            two = 2 * mark1[i];
            if (two + 3 <= max)
                return {1, two / 2};
        }
    }
    else if (mark1[0] == 1 == 1 && a[mark1[0]] == 2)
    {
        for (int i = mark1.size() - 1; i >= 1; --i)
        {
            if (a[mark1[i]] >= 3)
            {
                three = 3 * mark1[i];
                if (three + 2 <= max)
                    return {three / 3, 1};
            }
        }
    }
    else
    {
        for (int i = mark1.size() - 1; i >= 0; i--)
        {
            if (a[mark1[i]] >= 3)
                three = 3 * mark1[i];
            // std::cout <<arr[i].f<<'\n';  测试工具
            for (int m = mark1.size() - 1; m >= 0; --m)
            {
                if (m == i)
                    continue;
                two = 2 * mark1[m];
                // std::cout <<three<< " "<< two<<'\n';    //测试工具
                if (three + two <= max)
                    return {three / 3, two / 2};
            }
        }
    }
    return {0, 0};
}
int main()
{
    // Add your test cases here

    // std::vector<int> result1 = solution(31, 42, {3,3,11,12,12,2,13,5,13,1,13,8,8,1,8,13,12,9,2,11,3,5,8,11,1,11,1,5,4,2,5});
    // std::cout << (result1 == std::vector<int>{1,13}) << std::endl;

    // std::vector<int> result2 = solution(16, 42, {8,1,10,11,7,1,9,10,7,9,8,8,10,11,8,6});
    // std::cout << (result2 == std::vector<int>{10, 1}) << std::endl;

    std::vector<int> result3 = solution(30, 97, {9, 3, 11, 7, 8, 11, 13, 6, 11, 4, 9, 7, 8, 11, 5, 9, 3, 1, 5, 8, 10, 2, 8, 12, 5, 9, 2, 12, 5, 4});
    std::cout << (result3 == std::vector<int>{11, 12}) << std::endl;

    return 0;
}
