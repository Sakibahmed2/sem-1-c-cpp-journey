#include <stdio.h>

int max_num(int arr[], int n, int i)
{
    if (i == n - 1)
    {
        return arr[i];
    }

    int num = max_num(arr, n, i + 1);

    if (arr[i] > num)
    {
        return arr[i];
    }
    else
    {
        return num;
    }
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

    int ans = max_num(arr, n, 0);
    printf("%d\n", ans);
    return 0;
}