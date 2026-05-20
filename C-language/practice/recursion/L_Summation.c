#include <stdio.h>

long long summation(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    long long res = arr[n - 1] + summation(arr, n - 1);
    return res;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long ans = summation(arr, n);
    printf("%lld", ans);

    return 0;
}