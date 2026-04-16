#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int posSum = 0;
    int nagSum = 0;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
        {
            posSum = arr[i] + posSum;
        }
        else
        {
            nagSum = arr[i] + nagSum;
        }
    }

    printf("%d %d", posSum, nagSum);

    return 0;
}