// 先创建差分数组然后排序
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;
typedef long long int i64;

int cmp(const void *a, const void *b)
{
    return *(i64 *)a - *(i64 *)b;
}

int main()
{
    i64 M, N, L, i;
    scanf("%lld%lld%lld", &L, &N, &M);
    i64 a[100010];
    i64 b[100010];
    for (i = 0; i < N; i++)
    {
        scanf("%lld", &a[i]);
    }
    b[0] = a[0];
    b[N] = L - a[N - 1];
    for (i = 1; i < N; i++)
    {
        b[i] = a[i] - a[i - 1];
    }
    //qsort(b, N, sizeof(i64), cmp);
    sort(b, b + N);
    printf("%lld", b[M + 1]);
    return 0;
}
