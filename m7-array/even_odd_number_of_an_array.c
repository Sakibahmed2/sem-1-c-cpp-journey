#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("Even: %d \n", arr[i]);
        }
        else
        {
            printf("Odd: %d \n", arr[i]);
        }
    }

    return 0;
}