#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int num;
    for (int i = 0; i < n; i++)
    {
        int prev = arr[i] - 1;
        // printf("%d", prev);

        if (prev != arr[i])
        {
            if (arr[i] != prev + 1)
            {
                num = arr[i];
            }
        }
        else
        {
            num = n;
        }
    }

    printf("%d", num);

    return 0;
}