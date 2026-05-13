#include <stdio.h>

long long int summation(long long int arr[], int n, int i)
{
    if (i == n - 1)
    {
        return arr[i];
    }

    long long int sum = summation(arr, n, i + 1);
    sum = sum + arr[i];

    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int ans = summation(arr, n, 0);
    printf("%lld", ans);
    return 0;
}