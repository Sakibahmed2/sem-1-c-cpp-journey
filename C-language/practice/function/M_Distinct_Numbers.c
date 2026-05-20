#include <stdio.h>

int findDistinct(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }
        if (i == j)
        {
            count++;
        }
    }

    return count;
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

    int ans = findDistinct(arr, n);

    printf("%d", ans);

    return 0;
}