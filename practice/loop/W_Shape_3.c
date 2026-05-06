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
            printf("*");
        }

        star += 2;
        printf("\n");
    }

    star -= 2;

    // lower half
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < star; j++)
        {
            printf("*");
        }

        star -= 2;
        printf("\n");
    }

    return 0;
}