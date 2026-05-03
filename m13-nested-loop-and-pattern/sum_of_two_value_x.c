#include <stdio.h>

int main()
{
    int sum = 8;
    int arr[5] = {2, 7, 5, 10, 3};

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j <= 5; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("%d %d", arr[i], arr[j]);
            }
        }
    }

    return 0;
}