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

    int total = r * c;
    int zeros = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 0)
            {
                zeros++;
            }
        }
    }

    if (total == zeros)
    {
        printf("This is a zero/null matrix.");
    }
    else
    {
        printf("This is not a zero/null matrix.");
    }
}