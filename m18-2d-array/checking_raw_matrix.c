#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Check if raw matrix
    // if (r == 1)
    // {
    //     printf("This is a raw matrix.");
    // }
    // else
    // {
    //     printf("This is not a raw matrix.");
    // }
}