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

    int minIdx = 0, maxIdx = 0, temp;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[minIdx])
        {
            minIdx = i;
        }
        if (arr[i] > arr[maxIdx])
        {
            maxIdx = i;
        }
    }

    temp = arr[minIdx];
    arr[minIdx] = arr[maxIdx];
    arr[maxIdx] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}