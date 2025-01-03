#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
void insertsort(int arr[], int n, int g)
{
    int j;
    for (int i = g; i < n; i += g)
    {
        int key = arr[i];
        for (j = i - g; j >= 0 && arr[j] > key; j -= g)
        {
            arr[j + g] = arr[j];
        }
        arr[j + g] = key;
    }
}
void shellsort(int arr[], int n)
{
    list<int> v;
    for (int i = 1;;)
    {
        if (i > n)
            break;
        v.push_back(i);
        i = 3 * i + 1;
    }
    for (int gap : v)
    {
        insertsort(arr, n, gap);
    }
}
int main()
{
    int arr[]{2, 3, 4, 5, 1, 3, 6, 6, 7, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    shellsort(arr, n);
    for (int i = 0; i < n; ++i)
        cout << arr[i] << ' ';
    return 0;
}