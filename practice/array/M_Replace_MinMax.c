#include <stdio.h>
#include <limits.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN;
    int min = INT_MAX;
    int temp = max;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            arr[i] = min;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            arr[i] = temp;
        }


    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}