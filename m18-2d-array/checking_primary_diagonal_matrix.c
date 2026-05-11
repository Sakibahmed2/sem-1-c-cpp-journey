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

    int isDiagonal = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i != j)
            {
                // Outside of diagonal
                if (arr[i][j] != 0)
                {
                    isDiagonal = 0;
                }
            }
        }
    }

    if (r == c)
    {
        if (isDiagonal)
        {
            printf("This is a primary diagonal matrix");
        }
        else
        {
            printf("This is not a primary diagonal matrix");
        }
    }
    else
    {
        printf("This is not a primary diagonal matrix");
    }
}