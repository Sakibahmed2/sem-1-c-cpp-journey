#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;

    // upper half
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < star; j++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        star += 2;
        printf("\n");
    }

    star -= 4;

    // lower half
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < star; j++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }

        star -= 2;
        printf("\n");
    }

    return 0;
}